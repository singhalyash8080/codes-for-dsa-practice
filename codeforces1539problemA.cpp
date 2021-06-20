#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    // first make brute force soln then this mathematical formula 

    int n,x,t;

    cin>>n>>x>>t;

    int temp = (t/x);

    // if number of participants that can participate during the first interval is greater than (n-1) then only (n-1) participants for first participant can participate during that interval and so on
    if(temp>(n-1)){
        cout<<(n)*(n-1)/2<<endl;
    }
    else{

        // number of (t/x) pairs for each interval + leftovers
        cout<<((n-temp)*(temp) + (temp)*(temp-1)/2)<<endl;
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