#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int dt){
    node *nd = new node();
    nd->data = dt;
    nd->left=NULL;
    nd->right=NULL;
    return nd;
}
//check &m
void verticalLevel(int *min,int *max,node *nd,int vl,map<int,vector<int>> &m){

    if(nd==NULL)return;

    m[vl].push_back(nd->data);

    if(vl<*min)*min=vl;
    else if(vl>*max)*max=vl;

    verticalLevel(min,max,nd->left,vl-1,m);
    verticalLevel(min,max,nd->right,vl+1,m);
}


void printVL(int min,int max,map<int,vector<int>> m){
    for(int i=min;i<=max;i++){
        int n =m[i].size();
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void verticalTraverse(node* nd){

    map<int,vector<int>> m;
    int min=0,max=0;

    verticalLevel(&min,&max,nd,0,m);
    printVL(min,max,m);
}

int main(){

    node* nd=newNode(1);
    nd->left=newNode(2);
    nd->right=newNode(5);
    nd->left->left=newNode(3);
    nd->left->right=newNode(4);
    nd->left->right->left=newNode(8);
    nd->left->right->left->left=newNode(9);
    nd->left->right->left->left->left=newNode(10);
    nd->right->left=newNode(6);
    nd->right->left->left=newNode(7);

    verticalTraverse(nd);
}