#include <iostream>
using namespace std;

//push and pop at both ends

//circular as well
class Deque{
    int front;
    int rear;
    int size;
    int* arr;

    Deque(int size){
        this->front=-1;
        this->rear=-1;
        this->size=size;
        this->arr=new int[size];
    }

    void push_front(int data){
        //overflow
        if((front==0 && rear==size-1)||(front==rear+1)){
            cout<<"Overflow "<<endl;
            return;
        }
        //single element
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        //circular nature
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        //normal flow
        else{
            front--;
        }
        arr[front]=data;
    }

    void push_back(int data){
        //overflow
        if((front==0 && rear==size-1)||(front-1==rear)){
            cout<<"Overflow "<<endl;
            return;
        }
        //single element
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        //circular nature
        else if(front!=0 && rear==size-1){
            rear=0;
        }
        //normal flow
        else{
            rear++;
        }
        arr[rear]=data;
    }

    void pop_front(){
        //underflow
        if(front==-1){
            cout<<"Underflow "<<endl;
        }

        //single element
        else if(front==rear){
            front=rear=-1;
        }
        //circular nature
        else if(front==size-1){
            front=0;
        }
        //normal flow
        else{
            front++;
        }
    }
    void pop_rear(){
        //underflow
        if(front==-1){
            cout<<"Underflow "<<endl;
        }
        //single element
        else if(front==rear){
            front=rear=-1;
        }
        //circular nature
        else if(rear==0){
            rear=size-1;
        }
        //normal flow
        else{
            rear--;
        }

    }
};

int main(){
  
  return 0;
}