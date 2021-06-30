#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool comp(pair<int,int> a, pair<int,int> b){

    return a.first < b.first; 
}

void solve()
{
    int n,*a;

    cin>>n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    vector <pair<int,int>> v;

    for (int i = 0; i < n; ++i)
    {
        
        v.push_back({a[i],i+1});
        
    }

    sort(v.begin(),v.end(),comp);

    int c=0;

    for (int i = 0; i < n; ++i)
    {
        for(int j = i+1; j < n; ++j){

            int x1 = v[i].first;
            int x2 = v[i].second;

            int y1 = v[j].first;
            int y2 = v[j].second;

            if((x1*y1) >= 2*n){
                break;
            }
            else if((x1*y1)==(x2+y2)){
                c++;
            }
        }
    }


    cout<<c<<endl;


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