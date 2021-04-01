#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

int lastOccurence(int *a,int n, int key){

    if(n==0){
        return -1;
    }

    int i = lastOccurence(a+1,n-1,key);

    if(i==-1){

        if(a[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }

    return i+1;

}

int firstOccurence(int *a,int n,int key){

    if(n==0){
        return -1;
    }

    if(a[0]==key){
        return 0;
    }

    int i = firstOccurence(a+1,n-1,key);

    if(i==-1){
        return -1;
    }
    else{
        return i+1;
    }
}

void solve()
{
    int a[]={1,2,3,3,6,7,9};

    int n = sizeof(a)/sizeof(int);

    cout<<lastOccurence(a,n,7)<<endl;
    cout<<firstOccurence(a,n,3);
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