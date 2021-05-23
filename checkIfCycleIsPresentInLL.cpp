#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class node{
public:
    int data;
    node *next;

    node(int d){

        data=d;
        next=NULL;
    }
};

node* insertAtEnd(node *&head, int d){

    node *n = new node(d);

    node *temp = head;

    if(temp==NULL){
        head=n;
        return n;
    }

    while(temp->next!=NULL){

        temp=temp->next;
    }

    temp->next=n;

    return n;
}

void print(node *head){

    while(head!=NULL){

        cout<<head->data<<"->";
        head=head->next;
    }
}

bool isCycleInLL(node *head){

    unordered_map <node*,int> mp;

    while(head!=NULL){

        if(mp[head]>0){
            return true;
        }

        mp[head]++;

        head = head->next;
    }

    return false;
}



void solve()
{
    node *head=NULL;

    node *one = insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    node *five = insertAtEnd(head,5);

    // five->next=one;

    if(isCycleInLL(head)){
        cout<<"Cycle is present in the LL";
    }
    else{
        cout<<"Cycle is not present in the LL";
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