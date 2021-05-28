#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int m=3;
    int total_finished=0;
    int allocation[n][m]={  {0,1,0},
                            {2,0,0},
                            {3,0,3},
                            {2,1,1},
                            {0,0,2} };

    int request[n][m]={   {0,0,0},
                          {2,0,2},
                          {0,0,0},
                          {1,0,0},
                          {0,0,2} };

    int available[m]={0,0,0};
    int finished[n];

    //marking processes with zero allocation
    for(int i=0;i<n;i++)
    {
        finished[i]=0;
        int counter=0;
        for(int j=0;j<m;j++)
        {
            if(allocation[i][j]==0) counter++;
            else  break;
        }
        if(counter==m)
        {
            finished[i]=1;
            total_finished++;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(finished[j]!=1 && request[j][0]<=available[0] && request[j][1]<=available[1] && request[j][2]<=available[2])
            {
                total_finished++;
                finished[j]=1;
                for(int k=0;k<m;k++) available[k] += allocation[j][k];
            }
        }
        if(total_finished==n) break;
    }

    int d=0;
    for(int i=0;i<n;i++)
    {
        if(finished[i]==0)
        {
            d=1;
            break;
        }
    }
    if(d==1) cout<<"Deadlock Detected\n";
    else cout<<"Deadlock is not possible in this case\n";

}
