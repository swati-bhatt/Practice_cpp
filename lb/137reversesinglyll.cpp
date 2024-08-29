#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        //yet to be written
    }

};

void print(Node * & head){
    Node * temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node * reverse(Node * & prev, Node * & curr){
    if(curr==NULL){
        return prev;
    }
    Node * fwd= curr->next;
    curr->next=prev;
    return reverse(curr,fwd);

}
using namespace std;

int main(){

    Node * first= new Node(10);
    Node * second= new Node(20);
    Node * third= new Node(30);
    Node * forth= new Node(40);
    Node * fifth= new Node(50);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;

    print(first);

    Node* prev=NULL;
    Node * curr= first;

    // Node * head= reverse(prev, curr);

    //using for loop
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    Node* head=prev;
    print(head);
  
  return 0;
}