#include <bits/stdc++.h>
#define N 1000
#define ll unsigned long long
using namespace std;

string a;
set<char> s;




int findErrorChar(string s, ll i, ll size)
{

    int t=0;
int index=0;

    ll j = 1;
    for (; i < (size / 2) + 1; i++)
    {
        if (s[i - 1] == s[size - j++]){
            continue;


        }


        //4  8
        else if (t==0&&(s[i - 1] != s[size - j]))
        {
            t=1;
            //5 8
            if(s[i]==s[size - j])
            {
                index=i-1;
                i++;
            }
            //4 7
            else  if(s[i -1]==s[size - j+1])
            {
                index = size - j;
                j++;
            }
            else
            {

                return -1;
            }

        }
        else
        {
            return -1;
        }
    }
    return index;



}

// palindrome
ll palin(string s, ll i, ll size)
{
    ll j = 1;
    for (; i < (size / 2) + 1; i++)
    {
        if (s[i - 1] == s[size - j++])
            continue;
        else
        {
            return -1;
        }
    }
    return 0;
}

// check if the string has all distinct character or not
int distinct(string x, ll start, ll end)
{
    ll len = end - start + 1, k;

    for (ll i = start; i <= end; i++)
    {
        s.insert(x[i - 1]);
    }

    k = s.size();
    s.clear();

    if (k == len)
        return 1;
    else
        return 0;
}

int main()
{
    ll t;
    cin >> t;
    ll cnt = 0;

    while (t--)
    {
        int q, n;
        ll x, l, r;
        char ch;

        cin >> a; // str input
        cin >> n; // number of query input
        cout << "Case " << ++cnt << ": "
             << endl;

        while (n--)
        {

            cin >> q; // query input
            if (q == 1)
            {
                cin >> l; // left value
                cin >> r; // right value


                    cout<<findErrorChar(a, l, r)<<endl;

                  //  cout << 0 << endl;

            }
            else
            {
                cin >> x;
                cin >> ch;
                a[x - 1] = ch;
                //cout << "NEW Str; " << a << endl; // this else protion is ok
            }
        }
    }
}
