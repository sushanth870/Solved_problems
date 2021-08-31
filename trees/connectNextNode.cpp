#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node *nextRight;
};

node *newNode(int dt)
{
    node *nd = new node;
    nd->data = dt;
    nd->left = NULL;
    nd->right = NULL;
    return (nd);
}

void printConnect(node* nd){
    node *nextLine=nd;

    while(nextLine){
        node *presentLine=nextLine;
        while(presentLine){
            cout << presentLine->data << " ";
            presentLine=presentLine->nextRight;
        }
        cout <<"\n";
        nextLine=nextLine->left;
    }
}

void connectNext(node *nd)
{
    queue<node *> qu;

    qu.push(nd);

    while (!qu.empty())
    {
        int size = qu.size();
        node *curr;
        while (size--)
        {
            curr = qu.front();
            if(curr->left)
            qu.push(curr->left);
            if(curr->right)
            qu.push(curr->right);
            qu.pop();
            if(!qu.empty())
            curr->nextRight = qu.front();
        }
        curr->nextRight=NULL;
    }
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

    connectNext(root);
    printConnect(root);
}