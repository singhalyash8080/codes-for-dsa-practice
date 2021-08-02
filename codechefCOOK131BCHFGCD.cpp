#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int x,y;

    cin>>x>>y;

    if(__gcd(x,y)>1){
    	cout<<0<<endl;
    }
    else{

    	if(__gcd(x+1,y)>1 or __gcd(x,y+1)>1){
    		cout<<1<<endl;
    	}
    	else{
    		cout<<2<<endl;
    	}
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