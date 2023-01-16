#include<stdio.h>
#include<stdlib.h>
int a[20][20],q[20]= {0},i,n,j,visited[10]= {0},f=0,r=-1;
void bfs(int v)
{
for(i=0; i<n; i++)
{
if(a[v][i]==1&& visited[i]==0)
q[++r]=i;
if(f<r)
{
//visited[q[f]]=1;
bfs(q[f++]);
}
}
}
int main()
{
int v;
printf("Enter the number of vertex:");
scanf("%d",&n);
printf("Enter the graph data in matrix form:\n");
for(i=0; i<n; i++)
{
for(j=0; j<n; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the starting vertex:");
scanf("%d",&v);
bfs(v);
printf("Visited nodes are:");
for(i=0; i<n; i++)
{
if(visited[i]==1)
printf("%d\t",i);

}
}
