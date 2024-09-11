#include <iostream>
using namespace std;

class CircularQueue{
    int size;
    int* arr;
    int front;
    int rear;

    public:
    //rear is pointing to the last element
        CircularQueue(int size){
            this->size=size;
            this->rear=-1;
            this->front=-1;
            this->arr= new int[size];
        }

//from rear
        void push(int data){
            //queue full 
            if((rear==size-1 && front==0)|| (front=rear+1)){
                cout<<"Queue overflow "<<endl;
                return;
            }
            //1st element
            else if(front==-1){
                front=0;
                rear=0;
            }
            //circular nature
            else if(rear==size-1 && front!=0){
                rear=0;
            }
            //normal flow
            else{
                rear++;
            }
            arr[rear]=data;
        }

//from front
        void pop(){
            //queue empty
            if(front==-1){
                cout<<"Underflow"<<endl;
                return;
            }
            //single element
            else if(front==rear){
                front=-1;
                rear=-1;
            }
            //circular nature
            else if(front==size-1){
                front==0;
            }
            //normal flow
            else{
                front++;
            }
        }

};

int main(){
  
  return 0;
}