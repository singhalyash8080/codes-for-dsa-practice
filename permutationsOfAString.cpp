#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

vector<string>find_permutation(string s)
{
    vector <string> v;
    
    if(s.length()==1){
        v.push_back(s);
        return v;
    }
    
    string s2="";
    
    for(int i=1;i<s.length();i++){
        s2+=s[i];
    }
    
    vector <string> v2 = find_permutation(s2);
    
    vector <char> c;
    
    
    for(int i=0;i<v2.size();i++){
        
        c.clear();
        
        for(int j=0;j<v2[i].size();j++){
            c.push_back(v2[i][j]);
        }
        
        for(int j=0;j<=v2[i].size();j++){
            
            s2="";
            
            c.insert(c.begin()+j,s[0]);
            
            for(int k=0;k<c.size();k++){
                s2+=c[k];
            }
            
          //  cout<<s2<<endl;
            
            v.push_back(s2);
            
            c.erase(c.begin()+j);
            
        }
        
    }
    
    sort(v.begin(),v.end());
    
    return v;
}

void solve()
{
    vector <string> v = find_permutation("ABC");

    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<endl;
    }
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