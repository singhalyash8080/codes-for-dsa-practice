#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();


vector<int> primeSieve(int n){

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

    vector <int> primes;

    for (int i = 1; i <= n; ++i)
    {
        if(a[i]){
            primes.push_back(i);
        }
    }

    return primes;

}

// printing prime factors of n
void primeFactorsSieve(int n, vector <int> primes){


    int p = primes[0],i=0;

    // only iterating over prime numbers and hence O(logn) iterations
    while(p<=sqrt(n)){

        while(n%p==0){
            n/=p;
            cout<<p<<endl;
        }

        p = primes[++i];
    }

    if(n!=1){
        cout<<n<<endl;
    }

    cout<<endl;
}




signed main()
{
    yashio();

    // pre-computing primes vector using primeSieve in approx O(n)
    vector <int> primes = primeSieve(100);

    int T = 1;
    cin>>T;
    while(T--)
    {
        int n;

        cin>>n;

        primeFactorsSieve(n,primes);
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