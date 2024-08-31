#include <iostream>
using namespace std;

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

void print(Node * &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* &prev,Node* &curr){
    if(curr==NULL){
        return prev;
    }
    Node* frwd=curr->next;
    curr->next=prev;
    return reverse(curr,frwd);
}

bool checkPalindrome(Node* &head1, Node* &head2){
    Node* temp1=head1;
    Node* temp2=head2;
    while((temp1!=NULL) && (temp2!=NULL)){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}

bool checkForPalindrome(Node* &head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    //slow is now pointing to the middle 
    Node* prev=NULL;
    Node* curr=slow->next;
    slow->next=reverse(prev,curr);
    Node* mid= slow->next;
    return checkPalindrome(head,mid);
}

int main(){

    Node * first=new Node(10);
    Node * second=new Node(20);
    Node * third=new Node(30);
    Node * forth=new Node(40);
    Node * fifth=new Node(40);
    Node * sixth=new Node(70);
    Node * seventh=new Node(20);
    Node * eigth=new Node(10);
    // Node * ninth=new Node(10);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eigth;
    // eigth->next=ninth;
    
    Node* prev=NULL;
    print(first);

    // Node* newHead=reverse(prev, first);
    // print(newHead);
    // if(checkPalindrome(first,newHead)){
    //     cout<<"Is Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Is not palindrome"<<endl;
    // }
    bool ans=checkForPalindrome(first);
    cout<<"after function call:"<<endl;
    print(first);
    if(ans){
        cout<<"Is a palindrome"<<endl;
    }
    else{
        cout<<"Is not palindrome"<<endl;
    }

  
  return 0;
}