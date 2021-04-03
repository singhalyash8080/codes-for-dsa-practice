#include <bits/stdc++.h>
using namespace std;


void yashio();

int merge(int *a,int s,int e){

    int mid=(s+e)/2;

    int n = sizeof(a)/sizeof(int);

    int *x=new int[n];
    int k=s;

    int i=s,j=mid+1,cnt=0;

    while(i<=mid && j<=e){

        if(a[i]<a[j]){
            x[k++]=a[i++];
        }
        else{
            x[k++]=a[j++];
            cnt+=(mid-i+1);
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

    return cnt;
}

int inversion_count(int *a,int s,int e){

    if(s>=e){
        return 0;
    }

    int mid = (s+e)/2;

    int x = inversion_count(a,s,mid);
    int y = inversion_count(a,mid+1,e);
    int z = merge(a,s,e);

    return x+y+z;
}

void solve()
{
    int a[]={1,5,2,6,3,0};
    int n=sizeof(a)/sizeof(int);

    cout<<inversion_count(a,0,n-1);
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