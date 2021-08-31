#include <bits/stdc++.h>

using namespace std;
int partation(vector<int> &Arr, int low, int high);

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
int partation(vector<int> &Arr, int low, int high)
{
    int i = low - 1, temp;
    int pivort = Arr[high];
    for (int j = low; j < high; j++)
    {
        // cout<<"c3\n";
        if (Arr[j] < pivort)
        {
            // cout<<"c4\n";
            i++;
             temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    }
    temp = Arr[i + 1];
    Arr[i + 1] = Arr[high];
    Arr[high] = temp;
    return (i + 1);
}
void quickSort(vector<int> &Arr, int low, int high)
{

    if (low < high)
    {
        // cout<<"c2\n";
        int pi = partation(Arr, low, high);

        quickSort(Arr, low, pi-1);
        quickSort(Arr, pi + 1, high);
    }
}
Node *quickSortLL(Node *A)
{
    Node *temp1;
    temp1 = A;
    vector<int> arr;
    while (temp1 != NULL)
    {   
        // cout<<"c1\n";
        arr.push_back(temp1->data);
        temp1 = temp1->next;
    }
    int n = arr.size();

    quickSort(arr, 0, arr.size() - 1);

    temp1 = A;
    int i = 0;
    while (temp1 != NULL)
    {  
        //  cout<<"c\n";
        temp1->data = arr[i];
        temp1 = temp1->next;
        i++;
    }
    return A;
}

int main()
{
    Node *head = NULL, *head2 = NULL;
    // append(&head, 6);
    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    append(&head, 5);
    append(&head, 2);
    append(&head, 4);
    append(&head, 1);
    append(&head, 3);
    // append(&head, 1);

    // append(&head, 0);

    head2 = quickSortLL(head);

    cout << "\nCreated Linked list is: ";
    printList(head2);

    return 0;
}


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// pair<ListNode*,ListNode*> getMid(ListNode* A){
//     ListNode* mid = A;
//     ListNode* fast = A;
//     ListNode* prev = NULL;
    
//     while(fast!=NULL && fast->next!=NULL){
//         prev = mid;
//         mid = mid->next;
//         fast = fast->next->next;
//     }
    
//     pair<ListNode*,ListNode*> result(prev, mid);
//     return result;
// }

// ListNode* merge(ListNode* A, ListNode* B){

//     ListNode* aNode = A;
//     ListNode* bNode = B;
//     ListNode* merged = NULL;
//     ListNode* tail = NULL;
    
//     while((aNode!=NULL) && (bNode!=NULL)){
//         ListNode* insertedNode = NULL;
        
//         if(aNode->val<bNode->val){
//             insertedNode = aNode;
//             aNode = aNode->next;
//         }
//         else {
//             insertedNode = bNode;
//             bNode = bNode->next;
//         }
        
//         if(merged){
//             tail->next = insertedNode;
//             tail = insertedNode;
//         }
//         else {
//             merged = tail = insertedNode;
//         }
//     }
    
//     //copy the remainder
//     while(aNode!=NULL){
//         tail->next = aNode;
//         tail = aNode;
//         aNode = aNode->next;
//     }
    
//     while(bNode!=NULL){
//         tail->next = bNode;
//         tail = bNode;
//         bNode = bNode->next;
//     }
    
//     //Update the last node appropriately
//     if(tail){
//         tail->next = NULL;
//     }
    
//     return merged;
// }

// void mergeSort(ListNode*& A){
//     //base condition
//     if((A==NULL) || (A->next==NULL)) {
//         //empty list or only 1 item left in the list.
//         return;
//     }
    
//     ListNode* mid = A;
//     ListNode* fast = A;
//     ListNode* prev = NULL;
    
//     while(fast!=NULL && fast->next!=NULL){
//         prev = mid;
//         mid = mid->next;
//         fast = fast->next->next;
//     }
    
    
//     if(prev){
//         prev->next = NULL;
//     }
    
//     mergeSort(A);
//     mergeSort(mid);
//     A = merge(A,mid);
// }

// ListNode* Solution::sortList(ListNode* A) {
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     mergeSort(A);
//     return A;
// }
