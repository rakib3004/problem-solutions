#include<iostream>

using namespace std;
#define n 5
#define m 3
int safeSequence[5];
int counter=0;

int allocation[n][m] = { {0,1,0}, //p0
    {2,0,0}, //p1
    {3,0,2}, //p2
    {2,1,1}, //p3
    {0,0,2}
}; //p4

int maxNeed[n][m] = { {7,5,3}, // p0
    {3,2,2}, // p1
    {9,0,2}, // p2
    {2,2,2}, // p3
    {4,3,3}
}; // p4

int available[m] = {3,3,2};
int remainingNeed[n][m];
int finished[n];

void initialize()
{
    for(int i=0; i<n; i++)
    {
        finished[i]=0;
        for(int j=0; j<m; j++)
        {
            remainingNeed[i][j]=maxNeed[i][j]-allocation[i][j];
        }
    }
}
int main()
{
    //initialize remaining need and finished
    initialize();
    while(1)
    {
        int i,j,k;
        for(i=0; i<n; i++)
        {
            if(finished[i]==0)
            {
                int flag=0;
                for(j=0; j<m; j++)
                {
                    if(remainingNeed[i][j]>available[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    finished[i]=1;
                    safeSequence[counter++]=i;
                    for(int k=0; k<m; k++) available[k]+=allocation[i][k];
                }
            }
        }
        if(counter==5) break;

    }
    cout<<"\nSafe Sequence: ";
    for(int i=0; i<n; i++) cout<<safeSequence[i]<<"-> ";
}
