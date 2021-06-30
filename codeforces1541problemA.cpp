#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    if(n%2==0){
        
        for (int i = 1; i <= (n); i+=2){
            int x = i;
            int y = i+1;

            cout<<y<<" "<<(x)<<" ";
        }  
    }
    else{

        vector<int> v;

        for (int i = 1; i <= (n); i++){

            v.push_back(i);
            
        }  

        for (int i = 0; i < (v.size()-1); i+=2)
        {
            swap(v[i],v[i+1]);
        }

        swap(v[v.size()-1],v[v.size()-2]);

        for (int i = 0; i < v.size(); ++i)
        {
            cout<<v[i]<<" ";
        }
        

    }

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