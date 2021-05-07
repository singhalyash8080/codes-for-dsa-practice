#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,a[100][100];
    cin>>n;

    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2){
        cout<<(-1)<<endl;
    }
    else{

    int num=1;

    for (int i = 0; i < (n); ++i)
    {
        for(int j = 0 ; j < n; ++j){

            if((i+j)%2==0){
                a[i][j]=num;

                num++;
            }
        }
    }



    for (int i = 0; i < (n); ++i)
    {
        for(int j = 0 ; j < n; ++j){

            if((i+j)%2!=0){
                a[i][j]=num;

                num++;
            }

        }
    }

    for (int i = 0; i < (n); ++i)
    {
        for(int j = 0 ; j < n; ++j){

            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }

    }


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