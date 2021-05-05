#include <bits/stdc++.h>
using namespace std;

#define int  long long int

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

void cll_insert(node *&head, int data){

    node *n = new node(data);
    node *temp = head;

    n->next=head;

    if(temp!=NULL){

        while(temp->next!=head){
            temp = temp->next;
        }

        temp->next=n;
    }
    else{
        n->next=n;
    }

    head=n;

}

void cll_print(node *head){

    node *temp=head;

    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    return; 
}



void solve()
{
    node *head=NULL;

    cll_insert(head,3);
    cll_insert(head,2);
    cll_insert(head,1);

    cll_print(head);



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