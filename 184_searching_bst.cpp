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

bool search(Node*root, int &data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(data<root->data){
        return search(root->left, data);
    }
    else{
        return search(root->right, data);
    }
}

int main(){
    Node* root=NULL;
    cout<<"enter data for bst"<<endl;
    takeInput(root);
    int key;
    cout<<"enter number u r looking for: ";
    cin>>key;
    if(search(root, key)){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
  return 0;
}