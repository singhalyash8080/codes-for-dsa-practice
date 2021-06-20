#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class Person{

public:
    string name;
    int age;

    Person(string s,int a){
        name = s;
        age = a;
    }
};

class PersonCompare{

public:
    bool operator()(Person A,Person B){
        return A.age < B.age;
    }
};

void solve()
{
    int n;
    cin>>n;

    priority_queue<Person,vector<Person>,PersonCompare> pq;

    for (int i = 0; i < n; ++i)
    {
        string name;
        int age;
        cin>>name>>age;

        Person p(name,age);
        pq.push(p);
    }

    for (int i = 0; i < 3; ++i)
    {
        Person p = pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
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