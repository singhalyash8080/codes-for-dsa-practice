#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    string s;

    cin>>s;

    map<char,int> mp;

    int c1=0,c2=0;

    for (int i = 0; i < s.length(); ++i)
    {
        mp[s[i]]++;
    }

    for(auto x = mp.begin();x!=mp.end();x++){

        if(x->second == 1){
            c1++;
        }
        else if(x->second > 1){
            c2+=1;
        }

    }

    int total = (c1/2) + (c2);

    cout<<total<<endl;
    // if(c%2==0){
    //     cout<<c/2<<endl;
    // }
    // else{
    //     cout<<(c+1)/2<<endl;
    // }

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