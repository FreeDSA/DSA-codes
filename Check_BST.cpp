#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

// yt video me int min,max ki jagah Node* liya min,max aur uska data access kiya hai. baki logic same hi likha , bs thoda lamba krke
bool checkBST(Node* root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data>min and root->data<max){
        if(checkBST(root->left,min,root->data) and checkBST(root->right,root->data,max)){
            return true;
        }
    }
    return false;
}

int main(){
    Node* root=new Node(5);
    root->left=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);

    root->right=new Node(6);
    root->right->right=new Node(5);

    cout<<"BST "<<checkBST(root,INT_MIN,INT_MAX)<<endl;
    
    return 0;
}
