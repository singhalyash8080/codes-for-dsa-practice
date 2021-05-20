#include <bits/stdc++.h>
using namespace std;

#define int long long int

class node{
public:
    int data;
    node *next;

    node(int d){

        data=d;
        next=NULL;
    }
};

void insertAtEnd(node *&head, int d){

    node *n = new node(d);

    node *temp = head;

    if(temp==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){

        temp=temp->next;
    }

    temp->next=n;
}

void print(node *head){

    while(head!=NULL){

        cout<<head->data<<"->";
        head=head->next;
    }
}

void reverseLL(node *&head){

    node *temp=head, *prev=NULL, *temp2;

    while(temp!=NULL){

        temp2=temp->next;
        temp->next=prev;

        prev=temp;
        temp=temp2;
    }

    head=prev;
}

node* reverseLLRec(node *head){

    if(head==NULL or head->next==NULL){
        return head;
    }

    // head of remaining reversed LL
    node *rhead = reverseLLRec(head->next);

    node *temp = rhead;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=head;
    head->next=NULL;

    return n;
}



void yashio();
 
void solve()
{
    node *head=NULL;

    int n,temp;

    cin>>n;

    while(n>0){
        cin>>temp;
        insertAtEnd(head,temp);
        n--;
    }

    // cout<<"Before reversing every k elements : \n";
    // print(head);

    // cout<<endl; 

    // reverseKelem(head,k);

    // cout<<"after reversing every k elements : \n";

    // reverseLL(head);
    head=reverseLLRec(head,NULL);
    print(head);
    
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