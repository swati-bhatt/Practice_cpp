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

Node* startOfLoop(Node* & slow, Node* & fast){
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

Node* checkLoop(Node* & head){
    Node* fast=head;
    Node* slow=head;

    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
            if(fast==slow){
                slow=head;
                return startOfLoop(slow,fast);
            }
        }
    }
    return NULL;
}

void print(Node * & head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node * first=new Node(10);
    Node * second=new Node(20);
    Node * third=new Node(30);
    Node * forth=new Node(40);
    Node * fifth=new Node(50);
    Node * sixth=new Node(60);
    Node * seventh=new Node(70);
    Node * eigth=new Node(80);
    Node * ninth=new Node(90);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eigth;
    eigth->next=ninth;
    ninth->next=NULL;

    Node* start=checkLoop(first);
    if(start== NULL) {
        cout<<"NO LOOP EXISTS"<<endl;
    }
    else{
        cout<<"Loop found at "<<start->data<<endl;
    }
  return 0;
}