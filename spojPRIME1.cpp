#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void primeSieve(int limit, vector <int> &primes,int m){

    //creating a vector for n digits and marking every number as non prime in the begining
    vector <bool> a(limit+1,0);

    //marking odd numbers as 1 in the begining
    for (int i = 3; i <=limit; i+=2)
    {
        a[i]=1;
    }

    //iterating odd numbers marked as 1 till i^2<=n
    for (int i = 3; i*i <=limit; i+=2)
    {
        if(a[i]){

            //marking multiples of prime numbers as non prime from i*i to less than n
            for (int j = i*i; j <=limit; j+=i)
            {
                a[j]=0;
            }
        }
    }

    a[0]=0;
    a[1]=0;
    a[2]=1;

    //printing prime numbers
    for (int i = 1; i <= limit; ++i)
    {
        if(a[i]){
            primes.push_back(i);

            // printing the first segment

            if(i>=m)
            cout<<i<<endl;
        }
    }

}

void segmentedSieve(int m,int n){
    
    int limit = floor(sqrt(n))+1;

    // vector for storing prime numbers till sqrt(n)
    vector <int> primes;

    // using simple sieve for generating primes for the first segment(numbers till sqrt(n))
    primeSieve(limit,primes,m);

    int low = m,high=n;


    // temporary array for storing segments of prime numbers
    bool mark[n-m+1];
    memset(mark, true, sizeof(mark));

    for (int i = 0; i < primes.size(); ++i)
    {   
        // finding first multiple of primes[i] in range(low,high)
        int loLim = (low/primes[i]) * primes[i];
        if (loLim < low)
            loLim += primes[i];

        for (int j = loLim; j <= high; j+=primes[i])
        {
            // marking multiples of primes[i] as not prime and using (j-low) to access position corresponding to the temp array
            mark[j-low]=0;
        }
    }

    for (int i = low; i <= high; ++i)
    {
        if(mark[i-low] and i!=1){
            cout<<(i)<<endl;
        }
    }
}

void solve()
{
    int m,n;

    cin>>m>>n;

    segmentedSieve(m,n);

    cout<<endl;
    

}

signed main()
{
    yashio();
    int T = 1;
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