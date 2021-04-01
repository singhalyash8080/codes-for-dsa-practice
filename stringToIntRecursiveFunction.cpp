#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

int stringToInt(string x,int n){

    if(n==0){
        return 0;
    }

    return stringToInt(x,n-1)*10 + (x[n-1] - '0');

}

void solve()
{
    cout<<stringToInt("1234",4);
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