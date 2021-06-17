// https://www.codechef.com/problems/MCQ6

#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

template <typename T>
class Graph{

    map<T,list<T>> l;

public:
    void addEdge(T x, T y){

        l[x].push_back(y);

    }

    void dfs_helper(T src, map <T,bool> &visited, list <T> &ordering){


        for (auto nbr : l[src]){
             if(!visited[nbr]){
                dfs_helper(nbr,visited,ordering);
             }
         }

        if(!visited[src])
        ordering.push_front(src); 

        visited[src] = true;

    }

    bool cycle_helper(T node, vector <bool> visited, vector <bool> &arr){

        // visit a node
        visited[node] = true;
        arr[node] = true;

        for(auto nbr : l[node]){

            if(arr[nbr]){
                return true;
            }
            else if(visited[nbr]==false){

                bool cycle_found = cycle_helper(nbr,visited,arr);

                if(cycle_found){
                    return true;
                }
            }
        }

        // leave a node
        arr[node] = false;
        return false;
    }

    bool contains_cycle(int V){

        vector <bool> visited(V,0);

        vector <bool> arr(V,0);

        for(auto node_pair:l){

            T node = node_pair.first;

            if(cycle_helper(node,visited,arr)){
                return true;
            }
        }

        return false;

    }

    void toplogSortDfs(){

        map<T,bool> visited;

        list <T> ordering;        

        for(auto p:l){
            T node = p.first;
            visited[node] = false;
        }

        for(auto node_pair : l){

            T node = node_pair.first;

            dfs_helper(node,visited,ordering);

        }

        for(auto x : ordering){
            cout<<x<<" ";
        }
        cout<<endl;

    }

};

void solve()
{
    int n,m,v1,v2;

    cin>>n>>m;

    if (n < 1 || n > 100 || m < 1 || m > 75){
        cout<<"Boundary constraint violated!"<<endl;
        return;
    }

    Graph <int>g;

    for (int i = 0; i < m; ++i){
        cin>>v1>>v2;

        if (v1 < 1 || v1 > n || v2 < 1 || v2 > n){
            cout<<"Boundary constraint violated!"<<endl;
            return;
        }

        g.addEdge(v1,v2);
    }

    if(g.contains_cycle(n)){
        cout<<"IMPOSSIBLE!\n";
    }
    else{
        g.toplogSortDfs();
    }

    // g.addEdge(6,3);
    // g.addEdge(6,1);
    // g.addEdge(5,1);
    // g.addEdge(5,2);
    // g.addEdge(3,4);
    // g.addEdge(4,2);
    // g.addEdge(2,1);


    // g.toplogSortDfs();

}

signed main()
{
    yashio();
    int T = 1;
    cin>>T;

    if (T < 1 || T > 150){
        cout<<"Boundary constraint violated!"<<endl;
        return 0;
    }

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