#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a;

    float sum=0;

    cin>>n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];

        sum+=a[i];
    }

    if((sum/(float)n)==1){
        cout<<0<<endl;
    }
    else{

        if((sum<=0) or sum<n)
            cout<<1<<endl;
        else
            if((sum-n)<0)
                cout<<(2)<<endl;
            else
                cout<<(sum-n)<<endl;
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