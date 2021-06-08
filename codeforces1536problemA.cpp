#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a;

    cin>>n;

    a = new int[n];

    bool f=1;

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];

        if(a[i]<0){
            f=0;
        }
    }

    if(f){
        cout<<"YES\n"<<101<<endl;

        for (int i = 0; i <= 100; ++i)
        {
            cout<<i<<" ";
        }
    }
    else{
        cout<<"NO";
    }


    cout<<endl;

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