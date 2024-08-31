#include <iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val=val;
        this->next=NULL;
        
    }
};

void print(ListNode * &head){
    ListNode * temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


ListNode* reverse(ListNode* &prev, ListNode* &curr){
        if(curr==NULL){
            return prev;
        }
        ListNode* frwd= curr->next;
        curr->next=prev;
        return reverse(curr,frwd);
}

    void insertAtHead(ListNode* &head, int data){
        cout<<"i am inside inserthead loop"<<data<<endl;
        ListNode* newNode=new ListNode(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }

    ListNode* getSum(ListNode* &l1, ListNode* &l2, ListNode* &ans, int &carry){
        if(l1==NULL && l2==NULL && carry==0){
            return ans;
        }
        while(l1!=NULL && l2!=NULL){
            int data=(l1->val)+(l2->val)+carry;
            carry = data/10;
            data=data%10;
            l1=l1->next;
            l2=l2->next;
            insertAtHead(ans,data);
        }
        while(l1!=NULL){
            int data=(l1->val)+carry;
            carry = data/10;
            data=data%10;
            l1=l1->next;
            insertAtHead(ans,data);
        }
        while(l2!=NULL){
            int data=(l2->val)+carry;
            carry = data/10;
            data=data%10;
            l2=l2->next;
            insertAtHead(ans,data);
        }
        while(carry!=0){
            int data=carry;
            carry = data/10;
            data=data%10;
            insertAtHead(ans,data);
        }
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* &l1, ListNode* &l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1==NULL && l2==NULL){
            return NULL;
        }
        ListNode* l1new=l1;
        ListNode* l2new=l2;
        ListNode* prev=NULL;
        l1new=reverse(prev,l1new);
        prev=NULL;
        l2new=reverse(prev,l2new);

        ListNode * ans=NULL;
        int carry=0;
        getSum(l1new,l2new, ans,carry);
        // we can insert at head instead of tail
        //or 
        //reverse(ans);
        return ans;   
    }

int main(){
    ListNode * first=new  ListNode(7);
    ListNode * second=new  ListNode(2);
    ListNode * third=new  ListNode(4);
    ListNode * forth=new  ListNode(3);
   
    ListNode * seventh=new  ListNode(5);
    ListNode * eigth=new  ListNode(6);
    ListNode * ninth=new  ListNode(4);

    first->next=second;
    second->next=third;
    third->next=forth;

    seventh->next=eigth;
    eigth->next=ninth;

    cout<<"printing 1st list ";
    print(first);
    cout<<"printing 2nd list ";
    print(seventh);
    ListNode* ans=addTwoNumbers(first,seventh);
     cout<<"printing ans ";
    print(ans);
  
  return 0;
}