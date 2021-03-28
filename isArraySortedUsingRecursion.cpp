#include <bits/stdc++.h>
using namespace std;

void yashio();

bool isArraySorted(int a[],int n){

    if(n==1){
        return 1;
    }

    if(a[0]<a[1] && isArraySorted(a+1,n-1)){
        return 1;
    }

    return 0;
}


void solve()
{
    int a[]={1,2,3,4,5};

    int n = sizeof(a)/sizeof(int);

    cout<<isArraySorted(a,n);
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