#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }

    int k,m;

    cin>>k>>m;

    int wSum = 0, ans = 0;

    for (int i = 0; i < k; ++i)
    {
        wSum+=arr[i];
    }

    if(wSum/k >= m){
        ans++;
    }

    int idx = 0;

    for (int i = k; i < n; ++i)
    {
        wSum-=arr[idx];
        wSum+=arr[i];

        if(wSum/k >= m){
            ans++;
        }

        idx++;
    }

    cout<<ans<<endl;
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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}