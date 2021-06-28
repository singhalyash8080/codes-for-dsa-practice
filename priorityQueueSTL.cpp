#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    // max priority queue by default
    priority_queue < int> pq;

    // min priority queue using comparators
    // priority_queue <int,vector<int>,greater<int>> pq;    

    int n;
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        int no;
        cin>>no;

        pq.push(no);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";

        pq.pop();
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