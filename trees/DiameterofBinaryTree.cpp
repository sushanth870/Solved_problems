
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *newNode(int dt)
{
    node *nd = new node;
    nd->data = dt;
    nd->left = NULL;
    nd->right = NULL;
    return (nd);
}
int max(int a,int b){
    return (a>b)?a:b;
}
int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
    }

int height(node* nd){
    if(nd==NULL)return 0;

    int a= height(nd->left);
    int b=height(nd->right);

    return max(a,b)+1;
}

int helper(node *nd){
    if(nd==NULL)return 1;

    // if(nd->left && nd->right){
        int lt= height(nd->left);
        int rt=height(nd->right);

        return max(lt+rt+1,helper(nd->left),helper(nd->right));
    // }

}

int Diameter(node* nd){
    int res=-999;
   return helper(nd);
}

int main()
{

    node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
    root->left->left->left = newNode(80);
    root->left->left->right = newNode(90);
    root->left->right->left = newNode(100);
    root->left->right->right = newNode(110);
    // root->right->left->left = newNode(120);
    // root->right->left->right = newNode(130);
    root->right->right->left = newNode(140);
    root->right->right->right = newNode(150);

    cout<<Diameter(root);
}