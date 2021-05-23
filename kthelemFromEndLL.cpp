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

node* kthElemFromEnd(node *head, int k){

    node *temp = head;

    while(k>0){

        temp = temp->next;
        k--;
    }

    while(temp!=NULL){
        temp = temp->next;
        head=head->next;
    }

    return head;
}



void solve()
{
    node *head=NULL;

    int n,k,temp;

    cin>>n;


    for (int i = 0; i < n; ++i)
    {
        cin>>temp;

        insertAtEnd(head,temp);
    }

    cin>>k;

    print(head);
    cout<<"\nkth element from the end : \n";
    node *kelem = kthElemFromEnd(head,k);

    cout<<kelem->data;

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