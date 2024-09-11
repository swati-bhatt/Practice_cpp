#include <iostream>
#include <queue>
#include <vector>
#include <map>

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
vector<int> topView(Node *root)
    {
        vector <int> ans;
        if(root==NULL){
            return ans;
        }
        map <int,int> mp;
        queue <pair<Node*,int> > q;
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> temp= q.front();
            q.pop();
            int hd=temp.second;
            int data=temp.first->data;
            
            if(mp.find(hd)==mp.end()){
                mp[hd]=data;
            }
           if(temp.first->left){
                q.push(make_pair(temp.first->left, hd-1));
            }
            if(temp.first->right){
                 q.push(make_pair(temp.first->right, hd+1));
            }
        }
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }

int main(){
    int data;
    cout<<"enter data for root node "<<endl;
    cin>>data;
    Node* root=buildTree(data);
    levelOrderTraversal(root);
    vector<int> ans= topView(root);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}