#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

template <typename T>
class Stack{

    vector <T> v;

public:
    void push(T data){
        v.push_back(data);
    }

    void pop(){
        v.pop_back();
    }

    bool empty(){
        return v.size()==0;
    }

    T top(){
        return v[v.size()-1];
    }
};

void solve()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(s.empty()==0){

        cout<<s.top()<<endl;
        s.pop();
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