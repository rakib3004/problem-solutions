#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll t,cas=0; scanf("%lld",&t);
    while(t--){
    ll n; scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    ll s=0,c=0,o=0;
    for(ll i=0;i<n;i++){
        if(a[i]>0)s+=a[i];
        else o++;
    }
    if(o==n){
        s=INT_MIN;
        for(ll i=0;i<n;i++){
            if(a[i]>s)c=i;
            s=max(s,a[i]);
        }

        printf("Case %lld: %lld 0\n",++cas,s);
        continue;
    }
    ll x=0,y=n;
    for(ll i=0;i<n;i++){
        if(a[i]<=0)x=i;
        else
            break;
    }
    for(ll i=n-1;i>=0;i--){
        if(a[i]<=0)y=i;
        else
            break;
    }

    for(ll i=x+1;i<y;i++){
        if(a[i]<=0){c++;
        if(a[i]==0 && ((a[i-1]>=0 && a[i+1]>=0)||(a[i-1]<=0 && a[i+1]<=0)))c--;
        else if(a[i]<=0 && a[i-1]<=0)c--;
    }

        }
       printf("Case %lld: %lld %lld\n",++cas,s,c);
    }

    }
