#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void primeSieve(int limit, vector <int> &primes){

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
            cout<<i<<endl;
        }
    }

}

// prints prime numbers less than n
void segmentedSieve(int n){
    
    int limit = floor(sqrt(n))+1;

    // vector for storing prime numbers till sqrt(n)
    vector <int> primes;

    // using simple sieve for generating primes for the first segment(numbers till sqrt(n))
    primeSieve(limit,primes);

    int low = limit,high=2*limit;

    // running loop for segments each of length 'sqrt(n)' till the length n
    while(low<n){

        if(high>n){
            high=n;
        }

        // temporary array for storing segments of prime numbers
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < primes.size(); ++i)
        {
            // finding first multiple of primes[i] in range(low,high)
            int loLim = floor(low/primes[i]) * primes[i];
            if (loLim < low)
                loLim += primes[i];

            for (int j = loLim; j < high; j+=primes[i])
            {
                // marking multiples of primes[i] as not prime and using (j-low) to access position corresponding to the temp array
                mark[j-low]=0;
            }
        }

        for (int i = low; i < high; ++i)
        {
            if(mark[i-low]){
                cout<<(i)<<endl;
            }
        }

        // Update low and high for next segment
        low+=limit;
        high+=limit;

    }
}

void solve()
{
    int n;

    cin>>n;

    segmentedSieve(n);

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