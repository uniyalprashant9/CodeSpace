/*
-----------> 5
            /  \
           /    \
--------->3      8
        /  \    /  \
       /    \  /    \
----->4     5  2     3

5 3 4
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
void levelOrderTraverse(Node *root,int level,int *printStatus){
    if(root==NULL || *printStatus == 1){
        return;
    }
    if(level == 1 && *printStatus==0){
        cout<<root->data<<" ";
        *printStatus=1;
        return;
    }
    levelOrderTraverse(root->left,level-1,printStatus);
    levelOrderTraverse(root->right,level-1,printStatus);
}
int main(){
    Node *root,*temp,*temp2;
    root = new Node(5); //5
    //root left
    temp = new Node(3);
    root->left = temp;  //3
    temp2 = new Node(4);
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
    int printStatus;
    for(int i=1;i<=treeHeight;i++){
        printStatus=0;
        levelOrderTraverse(root,i,&printStatus);
    }
    return 0;
}