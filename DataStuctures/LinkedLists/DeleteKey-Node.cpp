#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
void deleteEnd(Node **head,int key){
    Node* temp = *head , *prev;
    if(temp->data == key){
        *head=temp->next;
        delete(temp);
        return;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp == NULL){
        cout<<"Key Not Found...!!";
        return;
    }
    else{
        prev->next=temp->next;
        delete(temp);
    }
}
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
void display(Node *head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=NULL;
    insertEnd(&head,10);
    insertEnd(&head,15);
    insertEnd(&head,25);
    insertEnd(&head,35);
    display(head);
    cout<<endl;
    deleteEnd(&head,25);
    display(head);
    return 0;
}