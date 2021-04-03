#include <bits/stdc++.h>
using namespace std;

void yashio();

int partition(int *a,int s,int e){

    int i=s-1,j=s,pivot=a[e];
    while(j<=(e-1)){

        if(a[j]<=pivot){

            i++;  
            swap(a[i],a[j]);
        }

        j++;

    }

    swap(a[i+1],a[e]);
    return i+1;

}

void quick_sort(int *a,int s,int e){

    if(s>=e){
        return;
    }

    int p = partition(a,s,e);
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
}

void solve()
{
    int a[]={2,1,6,3,9,6,7,8,5};
    int n=sizeof(a)/sizeof(int);

    quick_sort(a,0,n-1);

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