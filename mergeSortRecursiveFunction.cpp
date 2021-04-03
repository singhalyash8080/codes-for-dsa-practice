#include <bits/stdc++.h>
using namespace std;

void yashio();

void merge(int *a,int s,int e){

    int i=s;
    int mid=(s+e)/2;

    int j=mid+1;

    int n = sizeof(a)/sizeof(int);

    int *x = new int[n];
    int k=s;

    while(i<=mid && j<=e){

        if(a[i]<a[j]){
            x[k++]=a[i++];
        }
        else{
            x[k++]=a[j++];
        }
    }

    while(i<=mid){
        x[k++]=a[i++];
    }

    while(j<=e){
        x[k++]=a[j++];
    }

    for (int i = s; i <= e; ++i)
    {
        a[i]=x[i];
    }

    delete [] x;
}

void merge_sort(int *a,int s,int e){

    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    merge(a,s,e);
}

void solve()
{
    int a[]={1,5,2,3,9,6,5};

    int n=sizeof(a)/sizeof(int);

    merge_sort(a,0,n-1);

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