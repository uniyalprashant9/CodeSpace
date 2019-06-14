#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
void Middle(Node *head){
    Node *pt1=head,*pt2=head;
    if(head!=NULL){
        while(pt2!=NULL && pt2->next!=NULL){
            pt1=pt1->next;
            pt2=pt2->next->next;
        }
    cout<<"\nMiddle:"<<pt1->data;
    }
    else{
        cout<<"List is empty";
    }
}
void insertEnd(Node **head,int value){
    Node *temp = new Node();
    temp->data=value;
    temp->next=NULL;
    if(*head == NULL)
    {
        *head=temp;
        return;
    }
    else{
        Node *lastNode = *head;
        while(lastNode->next !=NULL){
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
    //insertEnd(&head,45);
    display(head);
    Middle(head);
    return 0;
}