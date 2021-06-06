#include <bits/stdc++.h>
using namespace std;

#define int long long int

void printNumWithMaxPrimeFactors(int m, int n){

    vector <int> v(n+1,1);
    vector <int> f(n+1,0);

    v[2]=1;
    v[1]=0;
    v[0]=0;


    for (int i = 2; i <= n; i++)
    {

        if(v[i]){
            f[i]=1;

            for(int j = 2*i;j<=n;j+=i){
    
                    v[j]=0;
    
                    f[j]++;
    
            }
        }


    }

    int n_fac = f[m],num=m;

    for (int i = m+1; i <=n; ++i)
    {

        if(f[i]>n_fac){
            n_fac = f[i];
            num = i;
        }
    }

    cout<<num<<endl;

}

void yashio();

void solve()
{
    printNumWithMaxPrimeFactors(1,100);
}

signed main()
{
    yashio();
    int T = 1;
    // cin>>T;
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