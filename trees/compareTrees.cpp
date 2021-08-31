#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
};

node *newNode(int d)
{
    node *Node = new node();
    Node->data = d;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}

int height(node *nd)
{

    if (nd == NULL)
    {
        return 0;
    }

    int a = height(nd->left);
    int b = height(nd->right);
    return max(a, b) + 1;
}


int compareTrees(node *first, node *second){
    if(first ==NULL && second ==NULL)return 1;
    if(first!=NULL && second!=NULL){
        return (first->data == second->data && compareTrees(first->left, second->left) && compareTrees(first->right,second->right));
    }
    return 0;
}


int main()
{
    node *root = newNode(1);
    root->left = newNode(3);
    root->right = newNode(2);
    root->left->right = newNode(5);
    root->right->right = newNode(4);
    root->right->right->right = newNode(6);
    root->left->right->left = newNode(7);
    root->right->right->right->left = newNode(8);

    node *r2 = newNode(1);
    r2->left = newNode(3);
    r2->right = newNode(2);
    r2->left->right = newNode(5);
    r2->right->right = newNode(9);
    r2->right->right->right = newNode(6);
    r2->left->right->left = newNode(7);
    r2->right->right->right->left = newNode(8);

    // int ht = height(root);
    cout<<compareTrees(root,r2);
}