/*
    Sum of nodes which are greater from their next node.
    if last node is greater than first node then is will be added to the sum.

*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
void insertEnd( Node **headptr,int value){
    Node *temp = new Node();
    temp->data = value;
    temp->next=NULL;
    Node *lastptr = *headptr;
    if(*headptr == NULL){
        *headptr = temp;
        return;
    }
    else{
        while (lastptr->next != NULL)
        {
            lastptr = lastptr->next;
        }
        lastptr->next=temp;
    }
}
int getSum(Node *head){
    int sum=0;
    Node *temp = head;
    while(temp->next != NULL){
        if(temp->data > temp->next->data)
            sum+=temp->data;
        temp=temp->next;
    }
    if(head->data < temp->data)
        sum+=temp->data;
    return sum;
}
int main(){
    Node *head=NULL;
    int value,sum=0,n;
    cout<<"Enter no. of nodes";
    cin>>n;
    cout<<"Enter "<<n<<" values:";
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        insertEnd(&head,value);
    }
    sum=getSum(head);
    cout<<"\nSum="<<sum;
    return 0;
}