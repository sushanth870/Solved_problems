#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};


node* newNode(int dt){
    node* nd=new node;
    nd->data=dt;
    nd->left=NULL;
    nd->right=NULL;
    return (nd);
}

bool isBSTLayer(node* nd,int min,int max){

    if(nd==NULL) return true;

    // cout <<nd->data <<" min: " << min << " max: " << max << endl;
    

    if(nd->data<min)
    return false;

    if(nd->data>max)
    return false;

    return isBSTLayer(nd->left,min,nd->data-1) && isBSTLayer(nd->right,nd->data+1,max);
  

    
}

bool isBST(node *nd){

    int min=0,max=999;
    return isBSTLayer(nd,min,max);
}

int main(){

    node *root=newNode(8);
    root->left=newNode(5);
    root->right=newNode(12);
    root->left->left=newNode(4);
    root->left->right=newNode(7);
    root->right->left=newNode(11);
    root->right->right=newNode(16);


    cout<<isBST(root)<<" ";
}