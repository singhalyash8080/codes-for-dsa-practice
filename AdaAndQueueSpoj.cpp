#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

deque <int> d;

int flag=0;


void solve()
{
    string q;

    cin>>q;

    int temp;

    if(q=="toFront"){
        cin>>temp;

        if(!flag)
        d.push_front(temp);
        else
        d.push_back(temp);
    }
    else if(q=="front"){

        if(!d.empty() and !flag){
            cout<<d.front()<<endl;
            d.pop_front();
        }
        else if(!d.empty() and flag){
            cout<<d.back()<<endl;
            d.pop_back();
        }
        else{
            cout<<"No job for Ada?"<<endl;            
        }
    }
    else if(q=="back"){
        if(!d.empty() and !flag){
            cout<<d.back()<<endl;
            d.pop_back();
        }
        else if(!d.empty() and flag){
            cout<<d.front()<<endl;
            d.pop_front();
        }
        else{
            cout<<"No job for Ada?"<<endl;    
        }
    }
    else if(q=="reverse"){

        if(flag)
        flag=0;
        else
        flag=1;

    }
    else if(q=="push_back"){
        cin>>temp;

        if(!flag)
        d.push_back(temp);
        else
        d.push_front(temp);
    }

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
    freopen("input999.txt", "r", stdin);
    freopen("output999.txt", "w", stdout);
#endif
}