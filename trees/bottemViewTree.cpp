#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int dt){
    node* nd=new node();
    nd->data=dt;
    nd->left=NULL;
    nd->right=NULL;
    return nd;
}

void topviewLevel(int *min,int *max,node *nd,map<int,vector<int>> &m,int vl){

    if(nd==NULL)return;


    m[vl].push_back(nd->data);

    if(vl<*min)*min=vl;
    else if(vl>*max)*max=vl;

    topviewLevel(min,max,nd->left,m,vl-1);
    topviewLevel(min,max,nd->right,m,vl+1);


}

void printTopView(map<int,vector<int>> m,int min,int max){

   
    // for(auto mi=m.begin();mi!=m.end();mi++){
    //     for(auto vi=mi->second.begin();vi!=mi->second.end();vi++){
    //         cout<<*vi<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<"inprint\n";

    for(int i=min;i<=max;i++){
        
        cout<<m[i][m[i].size()-1]<<" ";
        cout<<"\n";
    }
}


void bottomViewTeaversal(node* nd){

    map<int,vector<int>> m;
    int min=0,max=0;

    topviewLevel(&min,&max,nd,m,0);
    printTopView(m,min,max);
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

    bottomViewTeaversal(nd);


    return 0;
}