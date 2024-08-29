#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"deleted : "<<val<<endl;
    }
};

int getLength(Node* &head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void insertAtHead(Node * & head, int data){
    Node * newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;

}

void insertAtTail(Node * & head, int data){
    Node * newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node * temp= head;
    while(temp->next!= NULL){
        temp= temp->next;
    }
    temp->next=newNode;
}

void insertAtPosition( Node * & head, int data, int pos){
    Node * newNode= new Node(data);
    if(head==NULL){
        head= newNode;
        return;
    }
    if(pos<0 || pos>=getLength(head)){
        cout<<"Invalid position"<<endl;
    }
    if(pos==0){
        insertAtHead(head, data);
        return;
    }
    if(pos==getLength(head)-1){
        insertAtTail(head, data);
        return;
    }
    Node * temp=head;
    int i=0;
    while(i<=pos){
        temp=temp->next;
        i++;
    }
    newNode->next= temp->next;
    temp->next=newNode;

}
void print (Node* & head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
  
  Node * head=NULL;
//   insertAtHead(head, 10);
//   insertAtHead(head, 20);
//   insertAtHead(head, 30);
//   insertAtHead(head, 40);
//   insertAtHead(head, 50);
  insertAtTail(head, 10);
  insertAtTail(head, 20);
  insertAtTail(head, 30);
  insertAtTail(head, 40);
  insertAtTail(head, 50);
  insertAtPosition(head, 300, 1);
  print(head);
  cout<<"Data at head is: "<<head->data<<endl;

  return 0;
}