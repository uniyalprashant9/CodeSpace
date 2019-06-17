#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
void insert_after(Node **prevNode,int value)
{
    Node *temp=new Node();
    temp->data=value;
    if(*prevNode==NULL){
        temp->next=NULL;
        *prevNode=temp;
    }
    else
    {
        temp->next=(*prevNode)->next;
        (*prevNode)->next=temp;
    }
 }
void display(Node *head)
{
    while(head !=NULL)
    {
    cout<<head->data<<" ";
    head=head->next;
    }
}
int main()
{
    Node *head=NULL;
    insert_after(&head,10);
    insert_after(&head,8);
    insert_after(&head,11);
    insert_after(&head,7);
    display(head);
return 0;
}
