#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void findSum(int *a, int *b, int n, int &sum1, int &sum2){

    sum1 = sum2 = 0;

    int x = (n - n/4);

    int x2 = x; 

    for (int i = 100; i >= 0; --i)
    {   
        if(a[i]>0 and x){

            if(a[i]>x){
                sum1+=(x*i);
                x=0;
            }
            else{
                sum1+=(a[i]*i);
                x-=a[i];    
            }    
        }
        
        if(b[i]>0 and x2){
            // cout<<"yes ";

            if(b[i]>x2){
                sum2+=(x2*i);
                x2=0;
            }
            else{
                sum2+=(b[i]*i);
                x2-=b[i];    
            }
        }

        // cout<<a[i]<<" ";
    }

}

void solve()
{
    int n;

    cin>>n;

    // vector <int> a,b;

    int tp;

    int a[101] = {0}, b[101] = {0};

    for (int i = 0; i < n; ++i)
    {
        cin>>tp;
        a[tp]+=1;
        // a.push_back(tp);
    }

    for (int i = 0; i < n; ++i)
    {
        cin>>tp;
        b[tp]+=1;
        // b.push_back(tp);
    }

    int c=0, sum1 = 0, sum2 = 0;

    findSum(a,b,n,sum1,sum2);

    while(sum1<sum2){

        a[100]++;
        b[0]++;
        n++;

        findSum(a,b,n,sum1,sum2);

        // cout<<sum1<<" "<<sum2<<endl;

        c++;
    }

    // cout<<endl;

    cout<<c<<endl;

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