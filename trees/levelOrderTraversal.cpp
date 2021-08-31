#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left,*right;

};

node* newNode(int d){
    node *Node = new node();
    Node->data = d;
    Node->left =NULL;
    Node->right =NULL;
    return Node;
}

int height(node *nd){

    if(nd==NULL){
        return 0;
    }

    int a=height(nd->left);
    int b=height(nd->right);
    return max(a,b)+1;
}

void levelOrderTrav(node *nd){

    queue <node*> q;
    node *currentNode;
    int ht = height(nd);
    q.push(nd);
    while(!q.empty()){
        currentNode = q.front();
        if(currentNode->left!=NULL)
        q.push(currentNode->left);
        if(currentNode->right!=NULL)
        q.push(currentNode->right);
        cout<<currentNode->data<<" ";
        q.pop();
    }
}

int main(){

    node* root = newNode(1);
    root->left =newNode(2);
    root->right =newNode(3);
    root->left->left =newNode(4);
    root->right->right =newNode(5);

    int ht=height(root);
    levelOrderTrav(root);

    cout<<"\nheight:"<<ht;
}