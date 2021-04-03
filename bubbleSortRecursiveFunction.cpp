#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

//bubble sort recursive function with only outer loop as recursive function
void bubb_sort(int *a, int n){

    if(n==1){
        return;
    }

    for (int i = 0; i < n-1; ++i)
    {
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }

    bubb_sort(a,n-1);
}

//bubble sort recursive with both loops as recursion
void bubble_sort_recursive(int *a,int j,int n){

    if(n==1){
        return;
    }

    if(j==n-1){
        return bubble_sort_recursive(a,0,n-1);
    }

    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }

    return bubble_sort_recursive(a,j+1,n);
}

void solve()
{
    int a[]={1,6,2,3,9,7};

    int n = sizeof(a)/sizeof(int);

    // bubb_sort(a,n);
    bubble_sort_recursive(a,0,n);

    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
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