#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int a,b,c,d,k;

    cin>>a>>b>>c>>d>>k;

    if((abs(c-a)+abs(d-b))==k or ((k-(abs(c-a)+abs(d-b)))>=0 and (k-(abs(c-a)+abs(d-b)))%2==0)){
        cout<<"yes"<<endl;
    }   
    else{
        cout<<"no"<<endl;
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