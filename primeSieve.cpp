#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// prints prime numbers less than n
void primeSieve(int n){

    //creating a vector for n digits and marking every number as non prime in the begining
    vector <bool> a(n+1,0);

    //marking odd numbers as 1 in the begining
    for (int i = 3; i <=n; i+=2)
    {
        a[i]=1;
    }

    //iterating odd numbers marked as 1 till i^2<=n
    for (int i = 3; i*i <=n; i+=2)
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

    //printing prime numbers
    for (int i = 1; i <= n; ++i)
    {
        if(a[i]){
            cout<<i<<endl;
        }
    }

}

void solve()
{
    int n;

    cin>>n;

    primeSieve(n);
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