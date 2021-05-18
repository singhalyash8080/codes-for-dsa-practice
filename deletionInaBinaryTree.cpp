#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

struct Node {
    int key;
    Node *left, *right;
};
 
/* function to create a new node of tree and
return pointer */
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};
 
/* Inorder traversal of a binary tree*/
void inorder(Node* temp)
{
    if (!temp)
        return;
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}

int height(Node* root)
{
  if(!root) return 0;
   
  int leftHt = height(root->left);
  int rightHt = height(root->right);
   
  return max(leftHt, rightHt) + 1;
}

Node* deepestNode(Node* root, int levels)
{
    if(!root) return NULL;
     
    if(levels == 1)
        return root;
     
    else if(levels > 1)
    {
        deepestNode(root->left, levels - 1);
        deepestNode(root->right, levels - 1);
    }

    // return NULL;
}

int numOfChild(Node* root, int key){

    if(root==NULL){
        return 0;
    }

    if(root->key==key){

        int c=0;

        if(root->left){
            c++;
        }

        if(root->right){
            c++;
        }

        return c;
    }

    int num1 = numOfChild(root->left,key);
    int num2 = numOfChild(root->right,key);  

    return num1+num2;
}

void deletion(Node* root, int key, Node *temp, int numOfChilds){
    
    if(root==NULL){
        return;
    }


    if(numOfChilds==2){
        
        if(root->left==temp){
            root->left=NULL;
        }

        if(root->right==temp){
            root->right=NULL;
        }

        if(root->key==key){
            root->key=temp->key;
            delete temp;
        }

    }
    else if(numOfChilds==1){

        if(root->left and root->left->key == key){

            Node *temp2 = root->left;

            if(root->left->left){
                root->left=root->left->left;
            }

            if(root->left->right){
                root->left=root->left->right;
            }

            delete temp2;
        }
        else if(root->right and root->right->key == key){

            Node *temp2 = root->right;

            if(root->right->left){
                root->right=root->right->left;
            }

            if(root->right->right){
                root->right=root->right->right;
            }

            delete temp2;
        }

    }
    else if(numOfChilds==0){

        if(root->left and root->left->key==key){
            root->left=NULL;
            delete root->left;
        }

        if(root->right and root->right->key==key){
            root->right=NULL;
            delete root->right;
        }

    }

    
    deletion(root->left,key,temp,numOfChilds);
    deletion(root->right,key,temp,numOfChilds);
}

void solve()
{

    Node* root = newNode(13);
    root->left = newNode(12);
    root->left->left = newNode(4);
    root->left->right = newNode(19);
    root->right = newNode(10);
    root->right->left = newNode(16);
    root->right->right = newNode(9);
    root->right->right->right = newNode(4);


    int key = 9;

    int levels = height(root);

    Node* temp = deepestNode(root, levels);

    inorder(root);
    cout<<endl;
    int numChilds = numOfChild(root,key);
        
    deletion(root,key,temp,numChilds);

    cout<<endl;
    inorder(root);

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