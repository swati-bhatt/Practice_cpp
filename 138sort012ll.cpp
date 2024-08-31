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

void insertAthead(Node* &head, int data){
    Node* newNode= new Node(data);
    if(head->data==-1){
        newNode=head;
        return;
    }
    newNode->next=head;
    head=newNode;   
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
    Node * temp0=new Node(-1);
    Node * temp1=new Node(-1);
    Node * temp2=new Node(-1);
    Node * curr= head;
    while(curr!=NULL){
        if(curr->data==0){
            insertAthead(temp0, 0);
        }
        else if(curr->data==1){
            insertAthead(temp1, 1);
        }
        else if(curr->data==2){
            insertAthead(temp2, 2);
        }
    }
    if(temp0!=NULL){
        if(temp1!=NULL){
            if(temp2!=NULL){
                temp0->next=temp1;
            }
        }
    }
}

int main(){

    Node *head = new Node(0);
    Node *first = new Node(2);
    Node *second = new Node(0);
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