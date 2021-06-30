#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int l,h;

    cin>>l>>h;

    string s;

    cin>>s;

    // cout<<s<<endl;

    vector <int> v;

    int c=0,totalf=0;

    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]=='0'){
            c++;

            if(i==s.length()-1){
                totalf+=c;
                v.push_back(c);
            }
        }
        else if(s[i]=='1'){

            if(c!=0){
                totalf+=c;
                v.push_back(c);                
            }
            c=0;
        }
    }

    int total = 0;

    // sort(v.rbegin(),v.rend());

    for (int i = 0; i < v.size(); ++i)
    {
        // cout<<totalf<<endl;
        if((2*(h-v[i])) < h){

            // cout<<v[i]<<endl;
            total+=(v[i]);
            h-=v[i];
            h*=2;  
        }


        // cout<<v[i]<<" ";

        // if(i==v.size()-1){
        //     cout<<endl;
        // }

        // totalf-=v[i];
    }

    // cout<<endl;

    if(h<=0){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
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