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

int minimum(Node* &root){
    if(root==NULL){
        return -1;
    }
    Node* temp= root;
    while(temp->left){
        temp=temp->left;
    }
    return temp->data;
}
int maximum(Node* &root){
    if(root==NULL){
        return -1;
    }
    Node* temp=root;
    while(temp->right){
        temp=temp->right;
    }
    return temp->data;
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=NULL;
    cout<<"enter data for bst"<<endl;
    takeInput(root);
    cout<<"MINI "<<minimum(root)<<endl;
    cout<<"MAXI "<<maximum(root)<<endl;

    inOrderTraversal(root);
    cout<<endl;
    preOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
    cout<<endl;
  return 0;
}