#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        //yet to be written
    }
};

void print(Node * & head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node * &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    Node * first= new Node(10);
    Node * second= new Node(20);
    Node * third= new Node(30);
    Node * forth= new Node(40);

    first->next=second;
    second->next=third;
    third->next=forth;

    second->prev=first;
    third->prev=second;
    forth->prev=third;

    print(first);
    cout<<getLength(first);
  
  return 0;
}