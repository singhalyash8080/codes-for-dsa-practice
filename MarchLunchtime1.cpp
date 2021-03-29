#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int a,y,x;

    cin>>a>>y>>x;

    if(a>=y){
        cout<<(x*y)<<endl;
    }
    else{
        cout<<(x*a+1)<<endl;
    }
    
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