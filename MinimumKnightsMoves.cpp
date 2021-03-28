#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    //getchar();
    while(t--){
        char a[3],b[3];
        cin>>a>>b;
        //cout<<"mnhj";
        int x1,x2,y1,y2;
         x1=a[0]-'a';
         y1=a[1]-'1';
         x2=b[0]-'a';
         y2=b[1]-'1';
        cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<" ";
        if(x1==x2 && y1==y2){
            cout<<0<<"\n";
            continue;
        }
        //cout<<"mnhj";

        int g[8][8];


        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)
                g[i][j]=0;

        }

        queue<pair<int,int>>q;
        q.push(make_pair(x1,y1));
        while(!q.empty()){
            //pair<int,int>cur;
            auto cur=q.front();
            int i=cur.first;
            int j=cur.second;
            q.pop();


            if((j+2)>=0 && (j+2)<8 && (i+1)>=0 && (i+1)<8 && g[j+2][i+1]==0 ){
                g[i+1][j+2]=g[i][j]+1;
                q.push(make_pair(i+1,j+2));
            }
             else if((j+2)>=0 && (j+2)<8 && (i-1)>=0 && (i-1)<8 && g[j+2][i-1]==0 ){
                g[i-1][j+2]=g[i][j]+1;
                q.push(make_pair(i-1,j+2));
            }
            else if((j-2)>=0 && (j-2)<8 && (i+1)>=0 && (i+1)<8 && g[j-2][i+1]==0 ){
                g[i+1][j-2]=g[i][j]+1;
                q.push(make_pair(i+1,j-2));
            }
            else if((j-2)>=0 && (j-2)<8 && (i-1)>=0 && (i-1)<8 && g[j-2][i-1]==0 ){
                g[i-1][j-2]=g[i][j]+1;
                q.push(make_pair(i-1,j-2));
            }
            else if((i+2)>=0 && (i+2)<8 && (j+1)>=0 && (j+1)<8 && g[i+2][j+1]==0 ){
                g[i+2][j+1]=g[i][j]+1;
                q.push(make_pair(i+2,j+1));
            }
            else if((i+2)>=0 && (i+2)<8 && (j-1)>=0 && (j-1)<8 && g[i+2][j-1]==0 ){
                g[i+2][j-1]=g[i][j]+1;
                q.push(make_pair(i+2,j-1));
            }
            else if((i-2)>=0 && (i-2)<8 && (j+1)>=0 && (j+1)<8 && g[i-2][j+1]==0 ){
                g[i-2][j+1]=g[i][j]+1;
                q.push(make_pair(i-2,j+1));
            }
             else if((i-2)>=0 && (i-2)<8 && (j-1)>=0 && (j-1)<8 && g[i-2][j-1]==0 ){
                g[i-2][j-1]=g[i][j]+1;
                q.push(make_pair(i-2,j-1));
            }}
            cout<<g[x2][y2]<<"\n";

        }

    }
