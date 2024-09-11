#include <iostream>
#include <vector>
#include <queue>
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

// int heightOfTree(Node* root){
//         if(root==NULL){
//             return 0;
//         }
//         return max(heightOfTree(root->left), heightOfTree(root->right))+1;
// }

// void verticalTreeTraversal(Node* root, vector<vector <int> > &ans, int level, int &midIndex){
//         if(root==NULL){
//             return;
//         }
//         ans[midIndex+level].push_back(root->data);
//         verticalTreeTraversal(root->left, ans, level-1, midIndex);
//         verticalTreeTraversal(root->right, ans, level+1, midIndex);
// }
// vector<vector<int> > verticalTraversal(Node* root) {
//         vector <vector<int> >ans;
//         if(root==NULL){
//             return ans;
//         }
//         int level=0;
//         int midIndex=heightOfTree(root)-1;
//         verticalTreeTraversal(root, ans,level, midIndex); 
// }


    vector<vector<int>> verticalTraversal(Node* root) {
        vector<vector<int> > ans;
        if(root==NULL){
            return ans;
        }
        map <int, map<int,vector<int> > > mp;
        queue <pair <Node*, pair <int, int> > > q;
        q.push(make_pair(root,make_pair(0,0)));

        while(!q.empty()){
            pair <Node* ,pair <int,int> > temp = q.front();
            q.pop();
            int hd= temp.second.first;
            int vd= temp.second.first;
            int data= temp.first->data;
            mp[hd][vd].push_back(data);

            if(temp.first->left){
                q.push(make_pair(temp.first->left, make_pair(hd+1,vd-1)));
            }
            if(temp.first->right){
                q.push(make_pair(temp.first->right,make_pair(hd+1, vd+1)));
            }
        }
        for(auto i: mp){
            for(auto j:i.second){
                ans.push_back(j.second);
            }
        }
        return ans;
    }
int main(){
    int data;
    cout<<"enter data for root node "<<endl;
    cin>>data;
    Node* root=buildTree(data);
    vector<vector<int> >ans=verticalTraversal(root);
    return 0;
}

