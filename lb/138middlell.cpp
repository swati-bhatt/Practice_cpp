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
        //yet to be written
    }
};

//find no of elements then n/2 for odd, n/2 or n/2 +1 for even O(2N)
int getLength(Node* &head){
    int count=0;
    Node* temp= head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

Node* middleUsingLength(Node * & head){
    Node * temp= head;
    int n= getLength(head);
    if(n&1){
        n=n/2;
        cout<<n<<endl;
    }
    else{
         // can put n= n/2 or (n/2)-1 as per required sol in case of even;
        n=(n/2)-1;
        cout<<n<<endl;
    }
    int i=0;
    while(i<n){
        temp= temp->next;
        i++;
    }
    return temp;
}

//using slow and fast pointers O(N)

Node * middleUsingPointers(Node * & head){
        Node * slow= head;
        Node * fast= head->next;
        // can initialise fast with head or head->next as per required sol in case of even;
        while(fast!=NULL && slow != NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast= fast->next;
                slow= slow->next;
            }
        }
        return slow;
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

    Node * first= new Node(10);
    Node * second= new Node(20);
    Node * third= new Node(30);
    Node * forth= new Node(40);
    Node * fifth= new Node(50);
    // Node * sixth= new Node(60);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    // fifth->next=sixth;

    print(first);
    cout<<getLength(first)<<endl;
    cout<<middleUsingLength(first)->data<<endl;
    cout<<middleUsingPointers(first)->data<<endl;
  
  return 0;
}