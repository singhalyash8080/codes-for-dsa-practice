#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a;

    cin>>n;

    a=new int[n];

    // element to store min positive element
    int min_pos = INT_MAX;

    int ans=0;

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];

        if(a[i]>0){
            min_pos=min(min_pos,a[i]);
        }
        else{
            ans++;
        }
    }

    sort(a,a+n);

    // element to store min abs diff and initialized with INT_MAX-1 so in case of only 1 zero as input we will get wrong ans
    int abs_diff=INT_MAX-1;

    // finding the minimum absolute difference
    for (int i = 0; i < n-1; ++i)
    {
        if(a[i+1]>0){
            break;
        }

        abs_diff = min(abs(a[i+1]-a[i]),abs_diff);
    }

    if(abs_diff>=min_pos){
        cout<<(ans+1)<<endl;
    }
    else{
        cout<<ans<<endl;
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