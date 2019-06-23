/*
             5
            /  \
           /    \
          3      8
        /
       /
      4

             5
            /  \
           /    \
          8      3
                  \
                   \
                    4
*/


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;

        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
int checkMirror(Node *root1,Node *root2){
    if(root1 == NULL && root2 == NULL)
        return 1;
    if(root1->data == root2->data){
        cout<<root1->data<<" "<<root2->data<<endl;
        return checkMirror(root1->left , root2->right) && checkMirror(root1->right , root2->left );
    }
    return 0;
}
int main(){
    Node *root1,*root2;
    //root1
    root1 = new Node(5); //5
    //root1 left
    Node *temp1 = new Node(3);
    root1->left = temp1;  //3
    Node *temp2 = new Node(4);
    temp1->left=temp2;   //4

    //root1 right
    temp1=new Node(8);
    root1->right=temp1;   //8


    //root2
    root2 = new Node(5); //5
    //root2 left
    temp1 = new Node(8);
    root2->left = temp1;  //8

    //root2 right
    temp1=new Node(3);
    root2->right=temp1;   //3
    temp2= new Node(4);
    temp1->right=temp2;  //4
    cout<<checkMirror(root1,root2);
    return 0;
}