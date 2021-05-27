#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a;

    cin>>n;

    a = new int[n];

    int min_elem = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];

        min_elem = min(min_elem,a[i]);
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        if(a[i]>min_elem){
            cnt++;
        }
    }

    cout<<cnt<<endl;
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