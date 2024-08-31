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
        int val=this->data;
        if(this->next!=NULL){
            this->next=NULL;
            delete next;
        }
        cout<<"Deleted: "<<val;
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

void removeDuplicate(Node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* temp1=head;
    Node* temp2=head->next;
    if(temp1->data==temp2->data){
            temp1->next=temp2->next;
            temp2->next=NULL;
            delete temp2;
            removeDuplicate(temp1);
    }
    else{
        temp1=temp1->next;
        temp2=temp2->next;
        removeDuplicate(temp1);
    }
}

int main(){
  
    Node * first=new Node(10);
    Node * second=new Node(10);
    Node * third=new Node(20);
    // Node * forth=new Node(40);
    // Node * fifth=new Node(60);
    // Node * sixth=new Node(60);
    // Node * seventh=new Node(70);
    // Node * eigth=new Node(90);

    first->next=second;
    second->next=third;
    // third->next=forth;
    // forth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=seventh;
    // seventh->next=eigth;
    print(first);
    removeDuplicate(first);
    print(first);

  return 0;
}