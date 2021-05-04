#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class Queue{

    int *arr;
    int cs,ms,f,r;

public:

    Queue(int n=5){
        arr = new int[n];
        cs=0;
        f=0;
        ms=n;
        r=ms-1;
    }

    bool full(){
        return cs==ms;
    }

    bool empty(){
        return cs==0;
    }

    void push(int d){

        if(!full()){

            r=(r+1)%ms;

            arr[r]=d;
            cs++;
        }
    }

    void pop(){

        if(!empty()){
            f=(f+1)%ms;
            cs--;
        }
    }

    int front(){
        return arr[f];
    }

    ~Queue(){

        if(arr!=NULL){
            delete [] arr;
            arr=NULL;
        }
    }
};

void solve()
{
    Queue q(2);

    q.push(1);
    q.push(2);


    for (int i = 0; i < 2; ++i)
    {
        cout<<q.front()<<" ";
        q.pop();
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