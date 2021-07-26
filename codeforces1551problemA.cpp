#include <bits/stdc++.h>
using namespace std;

#define int long long int



void yashio();

void solve()
{
    int n;

    cin>>n;

    int x1 = (n-2)/3;

    int x2 = (n-1)/3;

    int x3 = (n)/3;


    if((3*x1 + 2)==n){
        cout<<x1<<" "<<(x1+1)<<endl;
    }
    else if((3*x2+1)==n){
        cout<<(x2+1)<<" "<<(x2)<<endl;
    }
    else{
        cout<<x3<<" "<<x3<<endl;
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