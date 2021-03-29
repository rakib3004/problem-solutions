#include<bits/stdc++.h>
using namespace std;
int dx[]={-2,-2,2,2,-1,-1,1,1};
int dy[]={1,-1,-1,1,2,-2,2,-2};
int main()
{

    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int x1,x2,y1,y2;
        x1=a[0]-'a';
        y1=a[1]-'1';
        x2=b[0]-'a';
        y2=b[1]-'1';

        if(x1==x2 && y1==y2)
        {
            cout<<0<<"\n";
            continue;
        }

        int g[8][8]= {0};

//        for(int i=0;i<8;i++){
//            for(int j=0;j<8;j++)
//                g[i][j]=0;
//
//        }

        queue<pair<int,int> >q;
        q.push(make_pair(x1,y1));
        int acc=0;
        while(!q.empty())
        {
//            pair<int,int>cur;
//            cur=q.front();
            int i=q.front().first;
            int j=q.front().second;
            q.pop();

            for(int dir=0; dir<8; dir++)
            {
                int nx=i+dx[dir];
                int ny=j+dy[dir];

                if(nx>=0 && nx<8 && ny>=0 && ny<8 && g[nx][ny]==0){

                    g[nx][ny]=g[i][j]+1;
                    q.push({nx,ny});
                }

            }

        }
        cout<<g[x2][y2]<<"\n";

    }

}
