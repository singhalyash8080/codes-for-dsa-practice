#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*h;

    cin>>n;

    h = new int[n];

    map <int,int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin>>h[i];

        mp[h[i]]++;
    }

    sort(h,h+n);

    int elem1,elem2,minn = INT_MAX;

    for (int i = 0; i < n-1; ++i)
    {   

        if(abs(h[i]-h[i+1])<minn){
            minn = abs(h[i]-h[i+1]);

            elem1 = h[i];
            elem2 = h[i+1];
        }
    }
    mp[elem1]--;
    mp[elem2]--;


    cout<<elem1<<" ";

    for (int i = 0; i < n; ++i)
    {
        if(mp[h[i]] and h[i]>=elem1){
            cout<<h[i]<<" ";
            mp[h[i]]--;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if(mp[h[i]]){
            cout<<h[i]<<" ";
            mp[h[i]]--;
        }
    }

    // for(auto x : mp){

    //     for (int i = 0; i < x.second; ++i)
    //     {
    //         cout<<x.first<<" ";
    //     }
    // }

    cout<<elem2<<endl;


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