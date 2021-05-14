#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void primeSieve(int *a, int n){

    //marking odd numbers as 1 in the begining
    for (int i = 3; i <=n; i+=2)
    {
        a[i]=1;
    }

    //iterating numbers marked as 1
    for (int i = 3; i <=n; i+=2)
    {
        if(a[i]){

            //marking multiples of prime numbers as non prime from i*i to less than n
            for (int j = i*i; j <=n; j+=i)
            {
                a[j]=0;
            }
        }
    }

    a[0]=0;
    a[1]=0;
    a[2]=1;

}

void solve()
{
    int a[1000]={0},n;

    cin>>n;

    primeSieve(a,n);


    //printing prime numbers
    for (int i = 1; i <= n; ++i)
    {
        if(a[i]){
            cout<<i<<endl;
        }
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