#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,k,tp;

    cin>>n>>k;

    vector <int> a;

    map <int,int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin>>tp;

        a.push_back(tp);

        mp[tp]++;
    }

    // total elements to be painted
    int tc = 0;

    for(auto x = mp.begin();x!=mp.end();x++){

        tc += min(k,x->second);
    }

    // gives closest multiple of k less than or equal to tc
    tc = (tc/k)*k;

    // to store indexes for all the occurences of the elements in the given sequence
    map <int,vector<int>> mp2;

    for (int i = 0; i < n; ++i)
    {
        if(mp2[a[i]].size() < k){
            mp2[a[i]].push_back(i);
            // cout<<a[i]<<" "<<i<<endl;
        }
    }

    // paint color
    int pno = 1;

    vector <int> ans(n,0);

    for(auto x = mp2.begin();x!=mp2.end();x++){

        int num = x->first;

        for(int j=0;j<mp2[num].size();j++){

            if(tc>0)
            ans[mp2[num][j]] = pno;

            pno++;

            if(pno>k){
                pno=1;
            }

            tc--;

            // cout<<mp2[num][j]<<" "<<pno<<endl;
        }

    }

    // cout<<endl;

    for (int i = 0; i < n; ++i)
    {
        cout<<ans[i]<<" ";
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