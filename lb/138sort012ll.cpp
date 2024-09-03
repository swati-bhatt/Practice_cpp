#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        
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

// Node* sortLinkedList(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node * temp=head;
//     int count0=0;
//     int count1=0;
//     int count2=0;
//     while(temp!=NULL){
//         if(temp->data==0){
//             count0++;
//         }
//         else if(temp->data==1){
//             count1++;
//         }
//         else if(temp->data==2){
//             count2++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp!=NULL){
//         while(count0--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(count1--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(count2--){
//             temp->data=2;
//             temp=temp->next;
//         }
//     }
//     return head;
// }

Node* sortLinkedList(Node* &head){
    if(head==NULL || head->next==NULL ){
        return head;
    }
    Node * zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node * onehead=new Node(-1);
    Node* onetail=onehead;
    Node * twohead=new Node(-1);
    Node* twotail=twohead;
    Node * curr= head;

    while(curr!=NULL){
        if(curr->data==0){
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;
           zerotail->next=temp;
           zerotail=temp;
        }
        else if(curr->data==1){
            Node* temp= curr;
            curr=curr->next;
            temp->next=NULL;
            onetail->next=temp;
            onetail=temp;
        }
        else if(curr->data==2){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            twotail->next=temp;
            twotail=temp;
        }
    }

    Node* temp= onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;

    temp= twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;

    if(onehead!=NULL){
        zerotail->next=onehead;
        if(twohead!=NULL){
            onetail->next=twohead;
        }
    }
    else{
        if(twohead!=NULL){
            zerotail->next=twohead;
        }
    }
    temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;
    return zerohead;
    
}

int main(){

    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(2);
    Node *fourth = new Node(0);
    Node *fifth = new Node(2);
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "Before sorting" << endl;
    print(head);
    head = sortLinkedList(head);
    cout << "After sorting" << endl;
    print(head);
  
  return 0;
}