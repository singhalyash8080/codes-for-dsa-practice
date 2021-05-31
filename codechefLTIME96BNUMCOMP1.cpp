#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

//creating a vector for n digits and marking every number as non prime in the begining
vector <bool> a(10000000+1,0);

// vector to store prefix sum to count the number of primes till n
vector <int> v(10000000+1,0);

void primeSieve(int n){

    n++;

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

}



void solve()
{
    int n;

    cin>>n;

    // to count the number of groups
    int cnt=0;

    // counting number of primes from (n/2)+1 to n because every prime number <=(n/2) will form a group with some number(observation)
    cnt = v[n]-v[n/2];

    if(n==2 or n==3){
        cout<<(cnt)<<endl;    
    }
    else{
        // adding to 1 to the answer since all numbers <=(n/2) will from group with even numbers and other groups will be formed by prime numbers >(n/2)
        cout<<(cnt+1)<<endl;
    }
    
    
}

signed main()
{
    yashio();
    int T = 1;
    primeSieve(10000000);

    // count the number of primes till n for each number in the [2,10^7]
    for (int i = 2; i <= 10000000; ++i)
    {
        v[i] = ((int)a[i] + v[i-1]);
    }

    cin>>T;
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