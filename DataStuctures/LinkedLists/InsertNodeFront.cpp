#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
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
    insertFront(&head,10);
    insertFront(&head,15);
    insertFront(&head,25);
    display(head);
    insertFront(&head,35);
    display(head);
    return 0;
}