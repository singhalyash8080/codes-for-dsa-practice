#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,q;

    cin>>n>>q;

    string s;

    cin>>s;

    map <char,int> mp1;

    int k=1;

    for (int i = (int)'a'; i <= (int)'z'; ++i)
    {
        mp1[(char)i]=k;
        k++;
    }

    int *pre = new int[n];

    for (int i = 0; i < n; ++i)
    {
        if(i==0)
        pre[i] = mp1[s[i]];
        else
        pre[i]=pre[i-1]+mp1[s[i]];
    }

    // for (int i = 0; i < n; ++i)
    // {
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;

    for (int i = 0; i < q; ++i)
    {
        map <char,int> mp2;

        int l,r;

        cin>>l>>r;

        if(l<2){
            cout<<pre[r-1]<<endl;    
        }
        else
        cout<<(pre[r-1]-pre[l-2])<<endl;

    }

}

signed main()
{
    yashio();
    int T = 1;
    // cin>>T;
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