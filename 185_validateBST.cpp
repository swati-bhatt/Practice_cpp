// QUES 98 LEETCODE

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root, int data){
    if(root==NULL){
        root= new Node(data);
        return root;   
    }
    if(root->data>=data){
        root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;   
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

bool validateBST(Node* root, int mini, int maxi){
    if(root==NULL){
        return true;
    }

    bool leftans=validateBST(root->left, mini, root->data);
    bool rightans=validateBST(root->right, root->data, maxi);
    bool currans;

    //non-duplicate cases only
    if(root->data<mini && root->data>maxi){
        currans=true;
    }
    else{
        currans=false;
    }
    if(leftans&&rightans&& currans){
        return true;
    }
    return false;
}

int main(){
    Node* root=NULL;
    takeInput(root);
    int mini=INT_MIN;
    int maxi=INT_MAX;
    if(validateBST(root,mini,maxi)){
        cout<<"Is a BST";
    }
    else{
        cout<<"Is not a BST";
    }
  
  return 0;
}