#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{

    // precomputing powers of 2 till 10^9
    vector <string> powers;

    int x = 1;

    int lim = pow(10,18);

    while(x<=lim){
        powers.push_back(to_string(x));
        x*=2;
    }

    // for (int i = 0; i < powers.size(); ++i)
    // {
    //     cout<<powers[i]<<endl;
    // }

    // actual logic

    int num;

    cin>>num;

    string s = to_string(num);

    // num of digits in the given string 
    int n = s.length();

    int ans = INT_MAX;

 
    for(int i =0;i<powers.size();i++){
        int idx = 0,cm=0;
        string pow  = powers[i];

        for (int j = 0; j < n; ++j)
        {
            if(idx>=pow.length()){
                break;
            }

            if(pow[idx]==s[j]){
                cm++;
                idx++;
            }
        }

        int total = (n-cm) + (pow.length()-cm);

        ans = min(total,ans);

    }


    cout<<min(ans,n+1)<<endl;
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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}