#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a;

    cin>>n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    cout<<(n*3)<<endl;

    for (int i = 1; i < (n); i+=2)
    {
        cout<<1<<" "<<i<<" "<<(i+1)<<endl;
        cout<<2<<" "<<i<<" "<<(i+1)<<endl;
        cout<<1<<" "<<i<<" "<<(i+1)<<endl;
        cout<<2<<" "<<i<<" "<<(i+1)<<endl;
        cout<<1<<" "<<i<<" "<<(i+1)<<endl;
        cout<<2<<" "<<i<<" "<<(i+1)<<endl;
    }
}

signed main()
{
    yashio();
    int T = 1;
    cin>>T; 
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