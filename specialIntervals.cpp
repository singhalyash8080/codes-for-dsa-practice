#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    int *specl = new int[n];
    int *specr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        int l,r;

        cin>>l>>r;

        specl[i] = l;

        specr[i] = r;

    }

    int q;

    cin>>q;

    sort(specl,specl+n);
    sort(specr,specr+n);


    for (int i = 0; i < n; ++i)
    {
        int ans = 0;

        int l,r;

        cin>>l>>r;

        int val1 =  upper_bound(specr,specr+n,l)-specr;

        int val2 = lower_bound(specl,specl+n,r)-specl;

        // ans = (n- val1 - (n-val2)) i.e (n - no. of intervals ending before l - no. of intervals starting after r)
        ans = (val2 - val1);
        
        cout<<ans<<endl;
    }


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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}