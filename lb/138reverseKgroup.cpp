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

int getLength(Node* & head){
    Node * temp= head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void print(Node * & head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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

Node* reverseKGroup(Node* &head, int k){
    if(k<=1){
        return head;
    }

    if(head==NULL){
        return head;
    }

    if(k>getLength(head)){
        //agar head ka next null houe toh length k se choti ho jaegi no need to handle explicitly
        return head;
    }

    Node* prev=NULL;
    Node* curr=head;
    Node* frwd; 
    int count=0;

    while(count<k){
        frwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frwd;
        count++;
    }
    //can pass both curr and forward as both are pointing to same pointer after while loop temination as value of frwd has not been further updated
    //forward is also curr ka next  and curr=frwd/
    head->next=reverseKGroup(curr,k);

    return prev;
}

int main(){
    Node * head= NULL;
  insertAtTail(head, 10);
  insertAtTail(head, 20);
  insertAtTail(head, 30);
  insertAtTail(head, 40);
  insertAtTail(head, 50);
  insertAtTail(head, 60);
  insertAtTail(head, 70);
  cout<<"Data at head is: "<<head->data<<endl;
  print(head);

  int k;
  cout<<"Enter value of k: ";
  cin>>k;
  Node* newHead=reverseKGroup(head,k);
  print(newHead);
  cout<<"Data at head is: "<<newHead->data<<endl;
//   cout<<"Length of linked list is: "<<getLength(head)<<endl;

  return 0;
}