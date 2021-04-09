#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

void solve()
{
    int n;
    cin>>n;

    int a[64]={0},no;

    for (int i = 0; i < n; ++i)
    {
        cin>>no;

        int j=0;

        while(no>0){

            int last_bit = (no & 1);

            a[j]+=last_bit;

            j++;

            no>>=1;
        }
    
    }

    int pow=1,num=0;

    for (int i = 0; i < 64; ++i)
    {
        a[i]%=3;
        num+=(a[i]*pow);
        pow<<=1;
    }

    cout<<num;



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