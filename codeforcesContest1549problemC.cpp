#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,m;

    cin>>n>>m;

    // no. of friends of each noble
    vector <int> edges(n+1,0);
    
    // no. of friends weaker than ith noble
    vector <int> weaker(n+1,0); 


    for (int i = 0; i < m; ++i)
    {
        int u,v;

        cin>>u>>v;

        // creating edges
        edges[u]++;
        edges[v]++;

        if(u<v){
            weaker[v]++;
        }
        else{
            weaker[u]++;
        }

    }

    // number of nobles left in beginning 
    int ans = 0;    

    for (int i = 1; i <=n ; ++i)
    {
        if(weaker[i]==edges[i]){
            ans++;
        }
    }

    int q;

    cin>>q;

    for (int i = 0; i < q; ++i)
    {
        int op,u,v;

        cin>>op;

        if(op==3){
            cout<<ans<<endl;
        }
        else if(op==2){

            cin>>u>>v;

            edges[u]--;
            edges[v]--;

            int f=1;

            if(u>v){
                weaker[u]--;
            }
            else{
                weaker[v]--;
                f=2;
            }

            // checking u to check prev ans
            if(f==1){

                if(edges[u]==weaker[u]){
                    ans--;
                }
            }
            else{

                if((edges[u]+1)==weaker[u]){
                    ans--;
                }

            }

            // checking v to check prev ans
            if(f==2){

                if(edges[v]==weaker[v]){
                    ans--;
                }
            }
            else{

                if((edges[v]+1)==weaker[v]){
                    ans--;
                }

            }

            // updating ans
            if(edges[u]==weaker[u]){
                ans++;
            }
            if(edges[v] == weaker[v]){
                ans++;
            }

        }
        else{

            cin>>u>>v;

            edges[u]++;
            edges[v]++;

            int f=1;

            if(u>v){
                weaker[u]++;

            }
            else{
                weaker[v]++;
                f=2;
            }

            // checking u to check prev ans
            if(f==1){

                if(edges[u]==weaker[u]){
                    ans--;
                }
            }
            else{

                if((edges[u]-1)==weaker[u]){
                    ans--;
                }

            }

            // checking v to check prev ans
            if(f==2){

                if(edges[v]==weaker[v]){
                    ans--;
                }
            }
            else{

                if((edges[v]-1)==weaker[v]){
                    ans--;
                }

            }

            // updating ans
            if(edges[u]==weaker[u]){
                ans++;
            }
            
            if(edges[v] == weaker[v]){
                ans++;
            }

        }
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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}