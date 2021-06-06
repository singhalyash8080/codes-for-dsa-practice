#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool isLucky(int n){

    static int counter = 2;

    if(counter>n){
        return 1;
    }
    
    if(n%counter==0){
        return 0;
    }

    int nextPosOfCurrNum = n - n/counter;

    counter++;

    return isLucky(nextPosOfCurrNum);
}

void solve()
{
    cout<<isLucky(19);
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