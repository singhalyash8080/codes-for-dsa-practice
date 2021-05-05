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

void ll_insertAtHead(node *&head,int d){

    if(head==NULL){
        head = new node(d);
        return;
    }

    node *temp = new node(d);
    temp->next=head;
    head=temp;

    return;
}

void ll_insertAtTail(node *&head,int d){

    if(head==NULL){
        head = new node(d);
        return;
    }

    node *tail = head;

    while(tail->next!=NULL){
        tail=tail->next;
    }

    tail->next = new node(d);
    return;
}

int ll_countNodes(node *head){

    int cnt=0;

    while(head!=NULL){
        head=head->next;
        cnt++;
    }

    return cnt;
}

void ll_insertInMid(node *&head,int d,int p){

    if(head==NULL or p==0){
        head = new node(d);
        return;
    }
    else if(p>ll_countNodes(head)){
        ll_insertAtTail(head,d);
    }
    else{

        int jump=1;

        node *temp = head;


        while(jump<=(p-1)){
            temp=temp->next;
            jump++;
        }

        node *n = new node(d);
        n->next=temp->next;
        temp->next=n;

        return;

    }
}

void ll_deleteHead(node *&head){

    if(head==NULL){
        return;
    }

    node *temp = head->next;
    delete head;
    head=temp;
}

bool ll_search(node *head,int key){

    while(head!=NULL){
        if(head->data==key){
            return 1;
        }
        head=head->next;
    }

    return 0;
}

void ll_reverse(node *&head){

    node *c=head,*p=NULL,*n;

    while(c!=NULL){

        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }

    head=p;
    return;
}

node* ll_rec_reverse(node *&head){

    if(head->next==NULL or head==NULL){
        return head;
    }

    node *shead = ll_rec_reverse(head->next);

    node *temp = shead;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=head;
    head->next=NULL;

    return shead;
}

node* midNode(node *head){

    if(head==NULL or head->next==NULL){
        return head;
    }

    node *slow=head;
    node *fast=head->next;

    while(fast!=NULL and fast->next!=NULL){

        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

node *kthNodeFromEnd(node *head, int k){

    if(head==NULL){
        return head;
    }

    node *slow = head,*fast = head;

    int temp=k;

    while(temp>0){
        fast=fast->next;
        temp--;
    }

    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }

    return slow;
} 

void ll_print(node *head){

    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }

    cout<<endl;
    return;
}




void solve()
{
    node *head=NULL;

    ll_insertAtHead(head,6);
    ll_insertAtHead(head,5);
    ll_insertAtHead(head,4);
    ll_insertAtHead(head,3);
    ll_insertAtHead(head,2);
    ll_insertAtHead(head,1);

    ll_print(head);

    int k=2;
    node *reqNode = kthNodeFromEnd(head,k);

    cout<<k<<"th node from end : "<<reqNode->data;


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