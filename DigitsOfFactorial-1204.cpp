#include<bits/stdc++.h>
using namespace std;
#define ll long long int

double logAtValue[1000005];




double  test()
{


double t;
ll a,b;

cin>>a>>b;



t = (logAtValue[a]/log10(b))+1;


    return t;

}
int main()
{
int i;


for(i=1;i<1000005;i++)
{

    logAtValue[i]= logAtValue[i-1]+ log10(i);
}



    int t;

    cin>>t;
int x=t;
    while(t--)
    {
        int k= x-t;
      int p=  test();

      cout<<"Case "<<k<<": "<<p<<endl;

    }


    return 0;

}
