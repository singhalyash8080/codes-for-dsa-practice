#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int C(int n, int r=2) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}


void solve()
{
    int n,*a;

    cin>>n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];

        a[i]-=i;
    }

    int total=0;

    unordered_map <int,int> mp;

    for (int i = 0; i < n; ++i)
    {
        mp[a[i]]++;
    }

    for (auto i = mp.begin(); i!= mp.end(); i++){

        if(i->second>1){
            total+=C(i->second);
        }
    }

    cout<<total<<endl;
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