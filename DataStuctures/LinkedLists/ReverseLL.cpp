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
void reverseLL(Node **head){
    Node *current=*head,*prev=NULL,*right=(*head)->next;
    while(current!=NULL){
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *head=prev;
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
    insertEnd(&head,5);
    insertEnd(&head,10);
    insertEnd(&head,15);
    insertEnd(&head,25);
    insertEnd(&head,35);
    display(head);
    cout<<endl;
    reverseLL(&head);
    display(head);
    return 0;
}