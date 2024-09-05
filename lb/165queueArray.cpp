#include <iostream>
using namespace std;

class Queue{
    int front;
    int rear;
    int* arr;
    int size;

public:
    Queue(int size){
        this->size=size;
        this->arr=new int[size];
        this->front=0;
        this->rear=0;
    }

    void push(int data){
        //considering rear is pointing to empty index i.e. index at which data is being inserted 
        if(rear==size){
            cout<<"Overflow"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    bool empty(){
        return(rear==front);
    }

    void pop(){
        if(empty()){
            cout<<"UnderFlow"<<endl;
        }
        else{
            front++;
            //memory saving
            if(rear==front){
                rear=0;
                front=0;
            }
        }
    }

    int getSize(){
        return (rear-front);
    }

    void getfront(){
        if(empty()){
            cout<<"empty queue"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
};

int main(){

    // Queue* q= new Queue(10);
    
    // q->push(5);
    // q->push(10);
    // q->push(15);
    // q->push(20);
    
    // cout<<"Size of queue = "<<q->getSize()<<endl;
  
    // q->pop();
    // cout<<"Size of queue = "<<q->getSize()<<endl;
    
    // q->getfront();
   
    // if(q->empty()){
    //     cout<<"Empty queue"<<endl;
    // }
    // else{
    //     cout<<"Not empty"<<endl;
    // }

    Queue q (10);
    // Pushing in queue
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    // Checking size of queue
    cout<<"Size of queue = "<<q.getSize()<<endl;
    // Removal 
    q.pop();
    cout<<"Size of queue = "<<q.getSize()<<endl;
    // Getting front element
    q.getfront();
    // Checking empty 
    if(q.empty()){
        cout<<"Empty queue"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    return 0;
  
  return 0;
}