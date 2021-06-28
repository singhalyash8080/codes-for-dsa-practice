#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool minHeap = false;

bool compare(int a,int b){

    if(minHeap){
        return a<b;
    }
    else{
        return a>b;
    }
}

void heapify(vector <int> &v, int idx){
    int left = 2*idx;
    int right = left + 1;

    int min_idx = idx;
    int last = v.size() - 1;

    if(left<=last and compare(v[left],v[idx])){
        min_idx = left;
    }

    if(right<=last and compare(v[right],v[min_idx])){
        min_idx = right;
    }

    if(min_idx!=idx){
        swap(v[idx],v[min_idx]);
        heapify(v,min_idx);
    }

}

// O(n) approach - check g4g for proof
void buildHeapOptimized(vector <int> &v){

    for (int i = ((v.size()-1)/2); i >=1; --i)
    {
        heapify(v,i);
    }
}

void solve()
{
    vector <int> v {-1,10,20,5,6,1,8,9,4};

    buildHeapOptimized(v);

    for (int i = 1; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
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