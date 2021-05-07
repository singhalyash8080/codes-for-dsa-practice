#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int power(int x,int y,int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return (res%p);
}

void solve()
{
    int n;
    const unsigned int mod = 1000000007;
    cin>>n;

    int x = (power(2,n-1,mod));

    cout<<x<<endl;

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