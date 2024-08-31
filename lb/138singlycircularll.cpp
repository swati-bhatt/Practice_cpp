#include <iostream>
using namespace std;

//THERE'S NO CONCEPT OF HEAD AND TAIL IN CIRCULAR LISTSSSSS
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
        int val=this->data;
        if(this->next!= NULL){
            this->next=NULL;
            delete next;
        }
        cout<<"Deleted value "<<val<<endl;
    }
};

int getLength(Node* &head){
    int len = 1;
    Node* temp = head;
    do{
        temp=temp->next;
        len++;
    }
    while(temp->next!=head);
    return len;
}

void print(Node * & node){
    Node * temp= node;
    do{
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    while(temp!=node);
    cout<<endl;
}

void inserAtHead(Node * & head, int data){
    Node * newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    Node* temp=head;
    newNode->next=head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    head=newNode;
}

void insertAtTail(Node* &head, int data){
    Node * newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    newNode->next=head;
    Node * temp= head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtPos(Node* &head, int data,int pos){
    Node * newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    if(pos<0 || pos>getLength(head)){
        cout<<"Invalid position "<<endl;
        return;
    }
    if (pos==0){
        inserAtHead(head,data);
        return;
    }
    if(pos==getLength(head)){
        insertAtTail(head, data);
        return;
    }
    Node * temp= head;
    int i=0;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

int main(){

    Node* head=NULL;
    inserAtHead(head,10);

    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtPos(head,50,5);
    // inserAtHead(head,20);
    // inserAtHead(head,30);
    // inserAtHead(head,40);

    // Node * first = new Node(2); 
    // Node * second = new Node(3);
    // Node * last = new Node(4);

    // first->next = second;
    // second->next = last;
    // last->next = first;
    print(head);
    cout<<getLength(head)<<endl;
    cout<<"Data at head is "<<head->data<<endl;
    
  return 0;
}