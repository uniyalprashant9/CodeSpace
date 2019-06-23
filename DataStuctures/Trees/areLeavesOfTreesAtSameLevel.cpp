/*
             5
            /  \
           /    \
          3      8
        /  \    /  \
       /    \  /    \
      4     5  2     3
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
int max(int x, int y){
    if(x>y)
        return x;
    return y;
}
int height(Node *root){
    if (root == NULL)
        return 0;
    return max(height(root->left),height(root->right)) +1;
}
int checkLeaves(Node *lChild,Node *rchild){
    if(lChild==NULL && rchild==NULL)
        return 1;
    if(height(lChild) == height(rchild)){
        return checkLeaves(lChild->left,lChild->right) && checkLeaves(rchild->left,rchild->right);
    }
    return 0;

}
int main(){
    Node *root;
    root = new Node(5); //5
    //root left
    Node *temp = new Node(3);
    root->left = temp;  //3
    Node *temp2 = new Node(4);
    temp->left=temp2;   //4
    temp2= new Node(5);
    temp->right=temp2;  //5
    //root right
    temp=new Node(8);
    root->right=temp;   //8
    temp2 = new Node(2);
    temp->left=temp2;   //2
    temp2= new Node(3);
    temp->right=temp2;  //3
    cout<<checkLeaves(root->left,root->right);
    return 0;
}