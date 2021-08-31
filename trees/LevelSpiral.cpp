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

void LevelSpiral(node *nd)
{
    stack<node *> st1, st2;

    st1.push(nd);

    do
    {
        while (!st1.empty())
        {
            node *curr = st1.top();
            cout << curr->data << " ";
            if (curr->right != NULL)
                st2.push(curr->right);
            if (curr->left != NULL)
                st2.push(curr->left);
            st1.pop();
        }
        while (!st2.empty())
        {
            node *curr = st2.top();
            cout << curr->data << " ";
            if (curr->left != NULL)
                st1.push(curr->left);
            if (curr->right != NULL)
                st1.push(curr->right);
            st2.pop();
        }

    } while (!st1.empty() || !st2.empty());
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

    LevelSpiral(root);
}