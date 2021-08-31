#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void append(Node **head_ref, int new_data)
{
    Node *temp = new Node();
    temp->data = new_data;
    temp->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = temp;
        return;
    }
    else
    {

        Node *last;
        last = *head_ref;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = temp;
        return;
    }
}
void push(Node **head_ref, int new_data)
{
    Node *temp = new Node();
    temp->data = new_data;
    temp->next = *head_ref;
    *head_ref = temp;
}
void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "the given previous node cannot be NULL";
        return;
    }

    /* 2. allocate new node */
    Node *new_node = new Node();

    /* 3. put in the data */
    new_node->data = new_data;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}

Node *deletionByIndex(Node *head, int pos)
{
    Node *temp, *temp2;
    temp = head;
    int i = 0;

    if (pos == 0)
    {
        temp2 = temp->next;
        temp->next = NULL;
        return temp2;
    }
    while (i <= (pos - 1))
    {
        temp2 = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "position not found\n";
            return head;
        }
        i++;
    }

    temp2->next = temp->next;
    temp->next = NULL;
    return head;
}
Node *deletionByKey(Node *head, int key)
{
    Node *temp, *temp2;
    temp = head;

    if (temp->data == key)
    {

        temp2 = temp->next;
        temp->next = NULL;
        return temp2;
    }

    while (temp->data != key)
    {
        temp2 = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "position not found\n";
            return head;
        }
    }

    temp2->next = temp->next;
    temp->next = NULL;
    return head;
}
Node *deleteLL(Node *head)
{
    Node *temp, *next;
    temp = head;
    next = NULL;

    while (temp != NULL)
    {
        next = temp->next;
        free(temp);
        temp = next;
    }
    head = NULL;
    return head;
}

int lengthOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int recursiveCount(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + recursiveCount(temp->next);
    }
}
void printList(Node *head_ref)
{
    if (head_ref == NULL)
    {
        cout << "LL is empty";
    }
    while (head_ref != NULL)
    {
        cout << " " << head_ref->data;
        head_ref = head_ref->next;
    }
}

// Given a linked list and a dataue x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.

// For example,

// Given 1->4->3->2->5->2 and x = 3,

// return 1->2->2->4->3->5.

Node* reorderList(Node *A)
{
    Node *temp1, *temp2,*mid;
    temp1 = A;
    temp2 = A;
    int count = 1;
    while (temp2->next != NULL)
    {
        mid=temp1;
        temp1 = temp1->next;
        count++;
        if (temp2->next->next!= NULL)
        {
            
            temp2 = temp2->next->next;
        } 
        else
        {
            temp2 = temp2->next;
            
            break;
        }
    }

    if(count%2==0){
        mid=temp1;
        temp1=temp1->next;
    }
   


     Node *prv=NULL, *curr=temp1,*Nxt=curr->next;
    while (curr != NULL){
                // cout<<"in while2\n";
        curr->next=prv;
        prv=curr;
        curr=Nxt;
        if(curr == NULL)break;
        Nxt=curr->next;
    }

    mid->next=prv;
    Node *fh=A,*sh=mid->next;
    mid->next=NULL;
    temp1=NULL;
    temp2=NULL;
    while(sh!=NULL){
                // cout<<"in while3\n";

        temp2=fh->next;
        fh->next=sh;
        temp1=sh->next;
        sh->next=temp2;
        fh=temp2;
        sh=temp1;
        

    }
    return A;

    
}

int main()
{
    Node *head = NULL, *head2 = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    append(&head, 7);
    append(&head, 8);
    append(&head, 9);
    append(&head, 10);
    append(&head, 11);
    // append(&head, 12);
    // append(&head, 13);
    // append(&head, 14);

    head = reorderList(head);
    printList(head);

    // cout << "\n"
    //      << c << endl;

    return 0;
}
