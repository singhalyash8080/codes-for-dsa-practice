#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

void solve()
{
    string s;

    cin>>s;

    int n= s.length();

    for (int i = 0; i < (1<<n); ++i)
    {
        int j=0;
        int n=i;
        while(n>0){

            if(n&1){
                cout<<s[j];
            }
            n>>=1;
            j++;
        }

        cout<<endl;
    }
}

signed main()
{
    yashio();
    int T = 1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
}

void yashio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input999.txt", "r", stdin);
    freopen("output999.txt", "w", stdout);
#endif
}