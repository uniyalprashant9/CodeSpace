/*
             5
            /  \
           /    \
          3      8
        /       /
       /       /
      4        2
                \
                 \
                  7
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
int height(Node *root){
    if (root == NULL)
        return 0;
    return max(height(root->left),height(root->right)) +1;
}
int max(int x, int y,int z){
    if(x>y)
        if(x>z)
            return x;
        else
            return z;
    else if(y>z)
        return y;
    else
        return z;
}
int findLongestPath(Node *root){
    if (root == NULL){
        return 0;
    }
    return max(height(root->left)+height(root->right),findLongestPath(root->left),findLongestPath(root->right));
}
int main(){
    Node *root;
    root = new Node(5); //5
    //root left
    Node *temp = new Node(3);
    root->left = temp;  //3
    Node *temp2 = new Node(4);
    temp->left=temp2;   //4
    //root right
    temp=new Node(8);
    root->right=temp;   //8
    temp2 = new Node(2);
    temp->left=temp2;   //2
    temp=new Node(7);
    temp2->right=temp; //7
    cout<<findLongestPath(root);
    return 0;
}