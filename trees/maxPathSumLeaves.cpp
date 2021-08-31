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


int maxhelper(node *nd,int &res){
    if(nd==NULL) return 0;

    if(!nd->left && !nd->right){
        return nd->data;
    }

        int lt=maxhelper(nd->left,res);
        int rt=maxhelper(nd->right,res);


    if(nd->left && nd->right){

        res=max(lt+rt+nd->data,res);

        return max(lt,rt)+nd->data;
    }
    
return (!nd->left) ?  rt + nd->data: lt+nd->data;

    

}
int maxpathsum(node* nd){

    int res=-9999;
    int val=maxhelper(nd,res);
    return (res==-9999)? val:res; 
}


int main(){

    struct node *root = newNode(-15);
	root->left = newNode(5);
	root->right = newNode(6);
	root->left->left = newNode(-8);
	root->left->right = newNode(1);
	root->left->left->left = newNode(2);
	root->left->left->right = newNode(6);
	root->right->left = newNode(3);
	root->right->right = newNode(9);
	root->right->right->right= newNode(0);
	root->right->right->right->left= newNode(4);
	root->right->right->right->right= newNode(-1);
    root->right->right->right->right->left= newNode(10);

    cout<<maxpathsum(root);
    return 0;

}