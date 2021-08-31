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

int mirror(node *nd)
{

    queue<node*> qu;
    map<char, int> m;
    qu.push(nd);

    while (!qu.empty())
    {
        int size = qu.size();
        node *temp=qu.front();
        
        while (size--)
        {
            temp = qu.front();
            if (temp->left != NULL)
            {
                qu.push(temp->left);
                m['L']=m['L']+1;
            }
            if (temp->right != NULL)
            {
                qu.push(temp->right);
                 m['R']=m['R']+1;
            }
            qu.pop();
        }
        if(m['L']!=m['R'])
        return 0;
        else{
            m['L']=0;
            m['R']=0;
        }
    
    }

    return 1;
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
    cout << mirror(root);

}