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
void display(Node *head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deleteAlternate(Node **head){
    Node *lastNode = *head;
    while(lastNode->next!=NULL && lastNode!= NULL){
        //delete temp
        Node *temp=lastNode->next;
        if(temp->next == NULL){
            lastNode->next=NULL;
            delete(temp);
            return;
        }
        lastNode->next=lastNode->next->next;
        lastNode=lastNode->next;
        delete(temp);
    }
}
int main(){
    Node *head=NULL;
    int value,n;
    cout<<"Enter no. of nodes";
    cin>>n;
    cout<<"Enter "<<n<<" values:";
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        insertEnd(&head,value);
    }
    deleteAlternate(&head);
    display(head);
    return 0;
}