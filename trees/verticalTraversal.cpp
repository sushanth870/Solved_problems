#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;
};

node* newnode(int dt){
    node *nd = new node();
    nd->data = dt;
    nd->left=NULL;
    nd->right=NULL;
    return nd;
}

void finding(int *min,int *max,node *nd,int vl){

    if(nd==NULL)return;

    if(vl<*min)*min=vl;
    else if(vl>*max)*max=vl;

    finding(min,max,nd->left,vl-1);
    finding(min,max,nd->right,vl+1);
}

void verticalPrint(int target_level,node *nd,int vl){

    if(nd==NULL)return;

    if(vl==target_level){
        cout<<nd->data<<" ";
    }

    verticalPrint(target_level,nd->left,vl-1);
    verticalPrint(target_level,nd->right,vl+1);
}

void verticalTraverse(node* nd){

    int min = 0,max=0;

    finding(&min,&max,nd,0);

    for(int i=min;i<=max;i++){
        verticalPrint(i,nd,0);
    }

}

int main(){

    node* nd=newnode(1);
    nd->left=newnode(2);
    nd->right=newnode(5);
    nd->left->left=newnode(3);
    nd->left->right=newnode(4);
    nd->left->right->left=newnode(8);
    nd->left->right->left->left=newnode(9);
    nd->left->right->left->left->left=newnode(10);
    nd->right->left=newnode(6);
    nd->right->left->left=newnode(7);

     verticalTraverse(nd);


}