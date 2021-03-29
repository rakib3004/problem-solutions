#include<bits/stdc++.h>
using namespace std;
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

            for(int a=i-2; a<=i+3; a++)
            {
                if(a==i||a==i-1||a==i+1)
                    continue;

                    for(int b=j-1; b<j+2; b++)
                    {
                        if(b==j)
                            continue;

                            if((b>=0 &&b<8) && (a>=0 && a<8) && g[a][b]==0 )
                            {

                                g[a][b]=g[i][j]+1;
                                q.push(make_pair(a,b));
                            }

                    }

            }

            q.pop();


        }


        for(int i=0;i<8;i++){
                cout<<endl;

            for(int j=0;j<8;j++)
                cout<<g[i][j]<<" ";
        }
cout<<endl<<endl;
        cout<<g[x2][y2]<<"\n";

    }

}
