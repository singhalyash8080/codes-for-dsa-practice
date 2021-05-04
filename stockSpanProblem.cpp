#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void CalculateStockSpan(int a[], int n, int span[]){

    stack <int> s;
    s.push(0);

    span[0]=1;

    for (int i = 1; i < n; ++i)
    {

        while(a[s.top()]<=a[i] and !s.empty()){
            s.pop();
        }

        if(!s.empty()){
            span[i]=(i-s.top());
            s.push(i);
        }
        else{
            span[i]=i+1;
        }


    }
}

void solve()
{
    int a[]={100,80,60,70,60,75,85};

    int n = sizeof(a)/sizeof(int);

    int span[100]={0};

    CalculateStockSpan(a,n,span);

    for (int i = 0; i < n; ++i)
    {
        cout<<span[i]<<" ";
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
    freopen("input999.txt", "r", stdin);
    freopen("output999.txt", "w", stdout);
#endif
}