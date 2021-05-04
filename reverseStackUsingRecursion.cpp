#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void insertAtBottom(stack<int> &s,int x){

    if(s.empty()){
        s.push(x);
        return;
    }

    int data = s.top();
    s.pop();

    insertAtBottom(s,x);

    s.push(data);
}

void reverseStackRec(stack <int> &s){

    if(s.empty()){
        return;
    }

    int x = s.top();
    s.pop();

    reverseStackRec(s);

    insertAtBottom(s,x);
}

void solve()
{

    stack <int> s;

    int n,temp;

    cin>>n;

    while(n--){
        cin>>temp;

        s.push(temp);
    }

    reverseStackRec(s);

    while(!s.empty()){

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