#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a,k;

    cin>>n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    cin>>k;

    deque <int> d(k);

    int i;

    for (i = 0; i < (k); ++i)
    {
        while(!d.empty() and a[i]>a[d.back()]){
            d.pop_back();
        }

        d.push_back(i);
    }

    for (; i < n ; ++i)
    {
        // printing the max element
        cout<<a[d.front()]<<" "; 

        // removing the elements not in the range [i,i+k]
        while(!d.empty() and d.front()<=(i-k)){
            d.pop_front();
        } 

        // removing uneccesary elements from the current subarray
        while(!d.empty() and a[i]>=a[d.back()]){
            d.pop_back();
        }

        d.push_back(i);
    }

    cout<<a[d.front()];

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