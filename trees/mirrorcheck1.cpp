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

int mirror(node *nd1,node *nd2)
{

    if(nd1==NULL && nd2 ==NULL){
        return 1;
    }

    if(nd1 && nd2 && nd1->data == nd2->data){
        return mirror(nd1->left,nd2->right) && mirror(nd1->right,nd2->left);
    }
    return 0;
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(3);
    root->right = newNode(2);
    root->left->left=newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    root->right->left = newNode(8);
    root->right->right->left = newNode(9);
    root->left->left->right= newNode(10);
    root->left->right->left= newNode(11);
    root->left->right->right= newNode(12);
    root->right->left->left= newNode(13);
    root->right->left->right=newNode(14);


    // int ht = height(root);
    cout << mirror(root,root);

}