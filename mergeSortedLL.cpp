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

node* merge(node *head1, node *head2){

    node *head3=NULL;

    while(head1!=NULL and head2!=NULL){

        if(head1->data < head2->data){
            insertAtEnd(head3,head1->data);

            head1 = head1->next;
        }
        else{
            insertAtEnd(head3,head2->data);

            head2 = head2->next;

        }
    }

    while(head1!=NULL){
        insertAtEnd(head3,head1->data);
        head1 = head1->next;
    }

    while(head2!=NULL){
        insertAtEnd(head3,head2->data);
        head2 = head2->next; 
    }


    return head3;
}

void solve()
{
    node *head1=NULL,*head2=NULL;

    insertAtEnd(head1,1);
    insertAtEnd(head1,3);
    insertAtEnd(head1,5);

    insertAtEnd(head2,2);
    insertAtEnd(head2,4);
    insertAtEnd(head2,7);
    insertAtEnd(head2,8);

    print(head1);
    cout<<endl;

    print(head2);
    cout<<endl;

    node *head3 = merge(head1,head2);

    print(head3);

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