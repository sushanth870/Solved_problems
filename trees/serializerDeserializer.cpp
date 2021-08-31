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
void helper(node* root,vector<int> &vt){
        
        if(root==NULL){
            vt.push_back(-1);
            return;
        }
        
        vt.push_back(root->data);
        helper(root->left,vt);
        helper(root->right,vt);
        
    }
 vector<int> serialize(node *root) 
    {
        //Your code here
        vector<int> vt;

        helper(root,vt);
        return vt;
    }

int main()
{

    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->left->left->left = newNode(6);
    root->right->left->right = newNode(7);
    root->left->left->left->right = newNode(8);

    vector<int> vt= serialize(root);

    for(auto i:vt){
        cout<<i<<" "<<endl;
    }

}