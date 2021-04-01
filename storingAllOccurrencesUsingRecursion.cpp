#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

int storeAllOccurrences(int *a,int *out,int i,int j,int n,int key){

    if(i==n){
        return j;
    }

    if(a[i]==key){
        out[j]=i;

        return storeAllOccurrences(a,out,i+1,j+1,n,key);
    }

    return storeAllOccurrences(a,out,i+1,j,n,key);

}

void solve()
{
    int a[]={1,2,2,3,2,6,2,1};

    int n = sizeof(a)/sizeof(int);

    int output[10000];

    int cnt = storeAllOccurrences(a,output,0,0,n,2);

    cout<<"All occurrences of 2 are \n";
    for (int i = 0; i < cnt; ++i)
       {
           cout<<output[i]<<" ";
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