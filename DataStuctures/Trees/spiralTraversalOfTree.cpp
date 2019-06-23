/*
-----------> 5  ----------->
            /  \
           /    \
<---------3      8<---------
        /  \    /  \
       /    \  /    \
----->4     5  2     3----->
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
void levelOrderTraverseLtoR(Node *root,int level){
    if(root==NULL){
        return;
    }
    if(level == 1){
        cout<<root->data<<" ";
        return;
    }
    levelOrderTraverseLtoR(root->left,level-1);
    levelOrderTraverseLtoR(root->right,level-1);
}
void levelOrderTraverseRtoL(Node *root,int level){
    if(root==NULL){
        return;
    }
    if(level == 1){
        cout<<root->data<<" ";
        return;
    }
    levelOrderTraverseRtoL(root->right,level-1);
    levelOrderTraverseRtoL(root->left,level-1);
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
    int treeHeight = height(root);
    for(int i=1;i<=treeHeight;i++){
        if(i%2==0)
            levelOrderTraverseRtoL(root,i);
        else
            levelOrderTraverseLtoR(root,i);
    }
    return 0;
}