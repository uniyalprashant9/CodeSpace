#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
void insertEnd (Node **head,int value){
    Node *temp = new Node();
    temp->data=value;
    temp->next=NULL;
    if(*head == NULL)
    {
        *head = temp;
        return;
    }
    else
    {
        Node *lastNode = *head;
        while(lastNode->next!= NULL){
            lastNode=lastNode->next;
        }
        lastNode->next=temp;
    }
}
void insertFront (Node **head,int value){
    Node *temp = new Node();
    temp->data=value;
    temp->next=*head;
    *head=temp;
}
void display(Node *head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=NULL;
    int arr[]={1,2,3,4,5,6,7,8,9,10},size=10;
/*
    Not an optimised way. O(n^2)

    for(int i=0;i<size;i++)
        insertEnd(&head,arr[i]);
*/

//  Optimized way. O(n)
    for(int i=size-1;i>=0;i--)
        insertFront(&head,arr[i]);
    display(head);
    return 0;
}