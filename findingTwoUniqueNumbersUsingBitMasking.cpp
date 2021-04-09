#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

void solve()
{
    int n,res=0;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        res^=(a[i]);
    }

    int pos=0,temp=res;

    while((temp&1)!=1){
        pos++;
        temp>>1;
    }

    int mask = (1<<pos),x=0,y=0;

    for (int i = 0; i < n; ++i)
    {
        if((a[i]&mask)>0){
            x^=a[i];
        }
    }

    y=(x^res);

    cout<<x<<" "<<y;

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