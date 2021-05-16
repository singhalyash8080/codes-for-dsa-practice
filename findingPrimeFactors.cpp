#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void primeFactors(int n){

    // if 2 is a factor of n, then printing all the factors
    while(n%2==0){
        n/=2;
        cout<<2<<endl;
    }

    // loop till sqrt(n) because composite numbers have atleast 1 factor less than the square root of n
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if(n%i==0){

            // this loop removes all occurrences of i from n
            while(n%i==0){
                n/=i;

                cout<<i<<endl;
            }
        }
    }

    // if a number is still greater than 1 then it means it is a prime greater than 2
    if(n>1){
        cout<<n<<endl;
    } 
}

void solve()
{
    int n;

    cin>>n;

    primeFactors(n);
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