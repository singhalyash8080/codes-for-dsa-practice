#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int casen = 1;

void solve()
{
    int n;

    cin>>n;

    char mat[n][n];

    for (int i = 0; i < n; ++i)
    {
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    int c = 0;

    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;

        bool f = 1;

        for(int j=0;j<n;j++){

            if(mat[i][j]=='X'){
                cnt++;
            }
            else if(mat[i][j]=='O'){
                f=0;
                break;
            }
        }

        if(f)
        c = max(cnt,c);
    }

    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;

        bool f = 1;

        for(int j=0;j<n;j++){

            if(mat[j][i]=='X'){
                cnt++;
            }
            else if(mat[j][i]=='O'){
                f=0;
                break;
            }
        }

        if(f)
        c = max(cnt,c);
    }

    int ans1 = (n-c),ans2=0;

    bool isPossible=0;

    set <vector<pair<int,int>>> pos;

    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;

        bool f = 1;

        vector <pair<int,int>> v1;

        for(int j=0;j<n;j++){

            if(mat[i][j]=='X'){
                cnt++;
            }
            else if(mat[i][j]=='O'){
                f=0;
                break;
            }
            else{
                v1.push_back({i,j});
            }
        }

        if(f){

            if(cnt==c){
                isPossible=1;

                pos.insert(v1);
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        int cnt = 0;

        bool f = 1;

        vector <pair<int,int>> v1;

        for(int j=0;j<n;j++){

            if(mat[j][i]=='X'){
                cnt++;
            }
            else if(mat[j][i]=='O'){
                f=0;
                break;
            }
            else{
                v1.push_back({j,i});
            }
        }

        if(f){

            if(cnt==c){
                isPossible=1;

                pos.insert(v1);
            }
        }

    }

    ans2 = pos.size();

    // for(auto v : pos){

    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i].first<<","<<v[i].second<<" ";
    //     }
    //     cout<<endl;
    // }


    cout<<"Case "<<"#"<<casen<<": ";

    if(isPossible)
    cout<<ans1<<" "<<ans2<<endl;
    else
    cout<<"Impossible"<<endl;

    casen++;
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