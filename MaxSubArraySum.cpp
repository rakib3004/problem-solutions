#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll t; cin>>t;
    while(t--){
    ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll s=0,c=0,o=0;
    for(ll i=0;i<n;i++){
        if(a[i]>=0)s+=a[i];
        else o++;
    }
    if(o==n){
        s=INT_MIN;
        for(ll i=0;i<n;i++){
            s=max(s,a[i]);
        }
        cout<<s<<" "<<1<<endl;
        continue;
    }
    ll x=0,y=n;
    for(ll i=0;i<n;i++){
        if(a[i]<0)x=i;
        else
            break;
    }
    for(ll i=n-1;i>=0;i--){
        if(a[i]<0)y=i;
        else
            break;
    }
    for(ll i=x+1;i<y;i++){
        if(a[i]<0){c++;
        if(a[i]==a[i-1])c--;
    }

        }
        cout<<s<<" "<<c<<endl;
    }

    }
