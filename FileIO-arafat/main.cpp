#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Graph
{
int Vertice; // Num of Vertices
list<int> *adjecent; // array of adjacency lists


void fillOrder(int ver, bool visited[], stack<int> &Stack);/* Fills Stack with Vertices in increasing order of finishing times.
 the maximum finishing time in the top*/


void DFSUtil(int ver, bool visited[]);//from ver, recursive function to print DFS.
public:
Graph(int Vertice);
void addEdge(int ver, int x);


void printSCCs();//main function that finds and prints scc


Graph getTranspose();//Function that returns reverse or transpose of graph
};

Graph::Graph(int Vertice)
{
this->Vertice = Vertice;
adjecent = new list<int>[Vertice];
}


void Graph::DFSUtil(int ver, bool visited[])//recursive function to print DFS starting from ver
{

visited[ver] = true;//Marks the current node as visited and print it
cout << ver << " ";


list<int>::iterator i;// Recur for all the vertices adjacent to this vertex
for (i = adjecent[ver].begin(); i != adjecent[ver].end(); ++i)
if (!visited[*i])
DFSUtil(*i, visited);
}

Graph Graph::getTranspose()
{
Graph gr(Vertice);
for (int ver = 0; ver < Vertice; ver++)
{

list<int>::iterator i;// Recur for all the vertices adjacent to this vertex
for(i = adjecent[ver].begin(); i != adjecent[ver].end(); ++i)
{
gr.adjecent[*i].push_back(ver);
}
}
return gr;
}

void Graph::addEdge(int ver, int x)
{
adjecent[ver].push_back(x); // Add x to ver’s list.
}

void Graph::fillOrder(int ver, bool visited[], stack<int> &Stack)
{

visited[ver] = true;// Marking the current node when visited and print it


list<int>::iterator i;// Recur for all the vertices adjacent to this vertex
for(i = adjecent[ver].begin(); i != adjecent[ver].end(); ++i)
if(!visited[*i])
fillOrder(*i, visited, Stack);


Stack.push(ver);// every vertices reachable from ver are processed by now
}


void Graph::printSCCs()//main function that finds and prints all scc
{
stack<int> Stack;


bool *visited = new bool[Vertice];// Marking all the vertices as not visited (For first DFS)
for(int i = 0; i < Vertice; i++)
visited[i] = false;


for(int i = 0; i < Vertice; i++)// Filling vertices in stack according to their finishing times
if(visited[i] == false)
fillOrder(i, visited, Stack);


Graph gr = getTranspose();// Creating a reversed graph


for(int i = 0; i < Vertice; i++)// Marking all the vertices as not visited (For second DFS)
visited[i] = false;


while (Stack.empty() == false)// Now processing all vertices in order defined by Stack
{

int ver = Stack.top();// Pop a vertex from stack
Stack.pop();


if (visited[ver] == false)// Print Scc of the popped vertex
{
gr.DFSUtil(ver, visited);
cout << endl;
}
}
}


int main()// Driver program to test above functions
{

Graph g(12);// Creating a graph given in the question

    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 6);
    g.addEdge(4, 5);
    g.addEdge(4, 7);
    g.addEdge(5, 2);
    g.addEdge(5, 6);
    g.addEdge(5, 7);
    g.addEdge(6, 3);
    g.addEdge(6, 8);
    g.addEdge(7, 8);
    g.addEdge(7, 10);
    g.addEdge(8, 7);
    g.addEdge(9, 7);
    g.addEdge(10, 9);
    g.addEdge(10, 11);
    g.addEdge(11, 12);
    g.addEdge(12, 10);


g.printSCCs();

return 0;
}

