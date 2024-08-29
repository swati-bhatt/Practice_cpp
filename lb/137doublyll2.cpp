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
        cout<<"Deleted value"<<this->data<<endl;
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

int getLength(Node * & head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node * & head, Node* &tail, int data ){
    Node* newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insertAtTail(Node* & head, Node* & tail, int data){
    Node * newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    // Node * temp= head;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    // temp->next=newNode;
    // newNode->prev=temp;
    // tail=newNode;
    tail->next= newNode;
    newNode->prev= tail;
    tail=newNode;
}

void insertAtPosition(Node* & head, Node* & tail, int data, int pos){
    Node *  newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    //head
    if(pos<=0){
        insertAtHead(head, tail, data);
        return;
    }
    //tail
    if(pos >=getLength(head)){
        insertAtTail(head, tail, data);
        return;
    }

    //mid
    int i=0;
    Node* bef= head;
    while(i<pos-1){
        bef=bef->next;
        i++;
    }
    Node * aft= bef->next;
    bef->next=newNode;
    newNode->next=aft;
    aft->prev=newNode;
    newNode->prev=bef;
}

void deletion(Node* & head, Node* & tail, int pos){
    if(head==NULL){
        cout<<"Can't Delete from empty linked List"<<endl;
        return;
    }
    if(pos<0 || pos>=getLength(head)){
        cout<<"Invalid Position"<<endl;
    }
    //head
    if(pos==0){
        Node * temp = head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    //tail
    if(pos==getLength(head)-1){
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;
    }
    //mid
    int i=0;
    Node* bef= head;
    while(i<pos-1){
        bef=bef->next;
        i++;
    }
    // Node * aft= bef->next->next;
    Node * temp= bef->next;
    bef->next=temp->next;
    temp->next->prev=bef;
    temp->prev=NULL;
    temp->next=NULL;
    delete temp;   
}

int main(){
    Node * head= new Node(10);
    Node * tail=head;
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtPosition(head, tail, 30,2);

    print(head);
    cout<<getLength(head)<<endl;
    cout<<"element at head is: "<<head->data<<endl;
    cout<<"element at tail is: "<<tail->data<<endl;

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
  return 0;
}