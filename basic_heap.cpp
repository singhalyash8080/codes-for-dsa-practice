#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// max and mean heap using the same class
class Heap{

    vector <int> v;
    bool minHeap;

    bool compare(int a, int b){
        if(minHeap){
            return a<b;
        }
        else{
            return a>b;
        }
    }

public:
    Heap(int defaultSize=10,bool type = true){
        v.reserve(defaultSize);
        v.push_back(-1);

        minHeap = type;
    }

    void push(int d){

        v.push_back(d);

        int idx = v.size() - 1;

        int parent = idx/2;

        // keep pushing to the top till you reach a root node or stop midway because we found an appropriate pos
        while(idx > 1 and compare(v[idx],v[parent])){
            swap(v[idx],v[parent]);

            idx = parent;

            parent = parent/2;
        }
    }

    void heapify(int idx){
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
            heapify(min_idx);
        }

    }

    void pop(){
        int last = v.size() - 1;
        swap(v[1],v[last]);
        v.pop_back();
        heapify(1);
    }

    int top(){
        return v[1];
    }

    bool empty(){
        // 1 because we have -1 as the extra element
        return v.size()==1;
    }
};

void solve()
{
    Heap h;

    int n;

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        int no;
        cin>>no;

        h.push(no);
    }

    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
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