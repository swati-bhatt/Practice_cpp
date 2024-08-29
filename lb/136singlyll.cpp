#include <iostream>
using namespace std;

//creation of node
class Node{
    public:
    int data;
    Node* next;

    // Node(){
    //     this->data=0;
    //     this->next=NULL;
    // } 

    Node(int data){
        this->data=data;
        this->next=NULL;
        
    }
    ~Node(){
        //yet to write
    }
};

void print(Node * &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int findLength(Node* & head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode= new Node(data);
    
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        //head should be moved backwarks
        newNode->next=head;
        head=newNode;

}

void insertAtTail(Node* & head, Node* &tail, int data){
    Node* newNode= new Node(data);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    //tail should be moved forwards
    tail->next=newNode;
    tail=newNode;
}

void insertAtPosition(Node* & head, Node* & tail, int data, int pos){

    // if((pos<0 ) || (pos>(findLength(head)+1))){
    //     cout<<"Invalid position";
    // }

    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(pos<=0){
        insertAtHead(head, tail, data);
        return;
    }
    if(pos>=findLength(head)){
        insertAtTail(head, tail, data);
        return;
    }

    Node*prev=head;
    int i=1;
    while(i<pos){
        prev=prev->next;
        i++;
    }
    Node* newNode= new Node(data);
    newNode->next=prev->next;
    prev->next=newNode;

}

void deletion(Node* & head, Node* & tail, int pos){
    if((pos<0) || (pos>=findLength(head))){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(head==NULL){
        cout<<"Can't Delete from empty linked list"<<endl;
        return;
    }
    //head
    if(pos==0){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    //tail
    if(pos==findLength(head)-1){
        int i =0;
        Node*prev=head;
        while(i<pos-1){
            prev=prev->next;
            i++;
        }
        prev->next=NULL;
        Node* temp= tail;
        tail=prev;
        delete temp;
        return;
    }

    //middle
        int i =0;
        Node*prev=head;
        while(i<pos-1){
            prev=prev->next;
            i++;
        }
        Node* temp= prev->next;
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;

}

int main(){
  Node* head= NULL;
  Node* tail= NULL;
    // Node* head = new Node(5);
    // Node* tail = head;

//   insertAtHead(head, tail, 10);
//   insertAtHead(head, tail, 20);
//   insertAtHead(head, tail, 30);
//   insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 10);
  insertAtTail(head, tail, 20);
  insertAtTail(head, tail, 40);
  insertAtTail(head, tail, 50);
  insertAtPosition(head, tail, 30, 2);
  print(head);
  cout<<"data at head: "<<head->data<<endl;
  cout<<"data at tail: "<<tail->data<<endl;

  deletion(head, tail, 0);
  cout<<endl;
  print(head);
  cout<<"data at head: "<<head->data<<endl;
  cout<<"data at tail: "<<tail->data<<endl;

  deletion(head, tail, 3);
  cout<<endl;
  print(head);
  cout<<"data at head: "<<head->data<<endl;
  cout<<"data at tail: "<<tail->data<<endl;

  deletion(head ,tail, 1);
  cout<<endl;
  print(head);
  cout<<"data at head: "<<head->data<<endl;
  cout<<"data at tail: "<<tail->data<<endl;

//   cout<<"length of LL iS: "<<findLength(head);

  return 0;
}