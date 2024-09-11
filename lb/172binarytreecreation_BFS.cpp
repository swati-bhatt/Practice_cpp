#include <iostream>
#include <queue>
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

Node* buildTree(int data){
    //condition specific
    if(data==-1){
        return NULL;
    }
    Node* root= new Node(data);
    int leftData;
    cout<<"enter data for left child of "<<data<<endl;
    cin>>leftData;
    root->left= buildTree(leftData);
    int rightData;
    cout<<"enter data for right child of "<<data<<endl;
    cin>>rightData;
    root->right=buildTree(rightData);
    return root;
}

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue <Node*> q;
    q.push(root);
    //to mark level is completed
    q.push(NULL);
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    int data;
    cout<<"enter data for root node "<<endl;
    cin>>data;
    Node* root=buildTree(data);
    levelOrderTraversal(root);
    return 0;
}