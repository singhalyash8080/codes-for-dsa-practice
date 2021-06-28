#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

typedef pair<int, pair<int,int>> node;  

vector <int> mergeKSortedArrays(vector <vector <int>> arr){

     vector <int> result;

     priority_queue <node, vector <node>, greater <node>> pq;

     // inserting the 0th element of every array in the pq and curly brackets are used for making pairs in modern c++
     for (int i = 0; i < arr.size(); ++i)
     {
         pq.push({arr[i][0], {i,0}});
     }

     // remove the elements one by one from the min heap and add to result vector

     while(!pq.empty()){
        node current = pq.top();

        pq.pop();

        int elem = current.first;
        int x = current.second.first; // row in which the element is present
        int y = current.second.second;// col in which the element is present

        result.push_back(elem);

        // pushing the next elem of current elem to the PQ
        if(y+1<arr[x].size()){
            pq.push({arr[x][y+1],{x,y+1}});
        }
     }

     return result;
}

void solve()
{
    vector <vector <int>> arr{{2,6,12,15},{1,3,14,20},{3,5,8,10}};
    
    vector <int> output = mergeKSortedArrays(arr);

    for(auto x:output){
        cout<<x<<" ";
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