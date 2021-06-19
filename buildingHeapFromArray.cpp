#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void buildHeap(vector <int> &v){

    for (int i = 2; i < v.size(); ++i)
    {
        int idx = i;

        int parent = i/2;

        while(idx>1 and v[idx]>v[parent]){

            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }
}

void solve()
{
    vector <int> v {-1,10,20,5,6,1,8,9,4};

    buildHeap(v);

    for (int i = 1; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
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