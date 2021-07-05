#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int countNodes(Node *head){
    
    int c=0;
    
    while(head!=NULL){
        c++;
        head = head->next;
    }
    
    return c;
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    int c1 = countNodes(head1);
    int c2 = countNodes(head2);
    
    int pos = abs(c2-c1);
    
    if(c1>c2){
        
        Node *temp = head1;
        
        while(pos>0){
            
            temp=temp->next;
            
            pos--;
        }
        
        while(temp!=NULL and head2!=NULL){
            
            if(temp == head2){
                return temp->data;
            }
            
            temp = temp->next;
            head2 = head2->next;
        }
    }
    else{
        Node *temp = head2;
        
        while(pos>0){
            
            temp=temp->next;
            
            pos--;
        }
        
        while(temp!=NULL and head1!=NULL){
            
            if(temp == head1){
                return temp->data;
            }
            
            temp = temp->next;
            head1 = head1->next;
        }
    }
    
    return -1;
}

void solve()
{
    
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