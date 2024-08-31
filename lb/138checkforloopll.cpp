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

bool checkForLoop(Node* & head){
    Node* fast=head;
    Node* slow=head;
    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
    }
    return false;
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
    ninth->next=fifth;

    // print(first);
    if(checkForLoop(first)){
        cout<<"Loop exists"<<endl;
    }
    else{
        cout<<"Loop doesn't exists"<<endl;
    }

  
  return 0;
}