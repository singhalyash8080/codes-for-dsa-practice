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

    int k;

    cin>>k;

    int wSum = 0, ans = 0, maxS, minS;

    for (int i = 0; i < k; ++i)
    {
        wSum+=arr[i];
    }

    maxS = minS = wSum;

    int idx = 0;

    for (int i = k; i < n; ++i)
    {
        wSum-=arr[idx];
        wSum+=arr[i];

        maxS = max(maxS,wSum);

        minS = min(minS,wSum);

        idx++;
    }

    cout<<(float)(maxS-minS)/(float)k<<endl;
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