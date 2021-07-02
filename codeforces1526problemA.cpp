#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n, *a;

    cin>>n;

    a = new int[2*n];

    for (int i = 0; i < 2*n; ++i)
    {
        cin>>a[i];
    }

    sort(a, a + 2*n);

    int x = 0, y = 2*n-1;

    for (int i = 0; i < n; ++i)
    {
        cout<<a[x]<<" "<<a[y]<<" ";
        x++;
        y--;
    }

    cout<<endl;

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