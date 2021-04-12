#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

int power(int a,int n){

    int ans = 1;

    while(n>0){

        if(n&1){
            ans*=a;
        }

        a*=a;
        n>>=1;
    }

    return ans;
}

void solve()
{
    cout<<power(2,5);
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