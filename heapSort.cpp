#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// initialzing minHeap to false for creating max heap
bool minHeap = false;

bool compare(int a,int b){

    if(minHeap){
        return a<b;
    }
    else{
        return a>b;
    }
}

void heapify(vector <int> &v, int idx, int size){
    int left = 2*idx;
    int right = left + 1;

    int min_idx = idx;

    // since size is changing after putting sorted elements at last one by one
    int last = size-1;

    if(left<=last and compare(v[left],v[idx])){
        min_idx = left;
    }

    if(right<=last and compare(v[right],v[min_idx])){
        min_idx = right;
    }

    if(min_idx!=idx){
        swap(v[idx],v[min_idx]);
        heapify(v,min_idx,size);
    }

}

void buildHeapOptimized(vector <int> &v){

    for (int i = ((v.size()-1)/2); i >=1; --i)
    {
        heapify(v,i,v.size()-1);
    }
}

void heapSort(vector <int> &arr){

    buildHeapOptimized(arr);

    int n = arr.size();

    // remove n-1 elements from the heap
    while(n>1){
        swap(arr[1],arr[n-1]);

        // removing that element from the heap

        n--;

        heapify(arr,1,n);
    }
}

void solve()
{
    // putting -1 as the extra element in the begining since we access elems starting from index 1 to n-1 in the array
    vector <int> v = {-1,4,1,8,5,10,3,7,6};

    heapSort(v);

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