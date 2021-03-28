#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    getchar();
    while(t--){
        string a,b;
        cin>>a>>b;


        int x1,x2,y1,y2;
         x1=a[0]-'a';
         y1=a[1]-'1';
         x2=b[0]-'a';
         y2=b[1]-'1';

        if(x1==x2 && y1==y2){
            cout<<0<<"\n";
            continue;
        }


        int g[8][8]={0};


//        for(int i=0;i<8;i++){
//            for(int j=0;j<8;j++)
//                g[i][j]=0;
//
//        }

        queue<pair<int,int> >q;
        q.push(make_pair(x1,y1));
        int acc=0;
        while(!q.empty()){
//            pair<int,int>cur;
//            cur=q.front();
            int i=q.front().first;
            int j=q.front().second;


//            for(int a=i-1;a<i+2;a++){
//        if(a==i) continue;
//
//  for(int b=j-1;b<j+2;b++){
//        if(b==j) continue;
//        cout<<endl<<acc<<" : ";
//        acc++;
//        cout<<a<<" "<<b<<endl;
//
//            }
//            }


            q.pop();


            if((j+2)>=0 && (j+2)<8 && (i+1)>=0 && (i+1)<8 && g[i+1][j+2]==0 ){
                g[i+1][j+2]=g[i][j]+1;
                q.push(make_pair(i+1,j+2));
            }
             else if((j+2)>=0 && (j+2)<8 && (i-1)>=0 && (i-1)<8 && g[i-1][j+2]==0 ){
                g[i-1][j+2]=g[i][j]+1;
                q.push(make_pair(i-1,j+2));
            }
            else if((j-2)>=0 && (j-2)<8 && (i+1)>=0 && (i+1)<8 && g[i+1][j-2]==0 ){
                g[i+1][j-2]=g[i][j]+1;
                q.push(make_pair(i+1,j-2));
            }
            else if((j-2)>=0 && (j-2)<8 && (i-1)>=0 && (i-1)<8 && g[i-1][j-2]==0 ){
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
            }

         //   cout<<g[x2][y2]<<"\n";


            }
            cout<<g[x2][y2]<<"\n";

        }

    }
