#include <iostream>
using namespace std;

class Stack{
    private:
        int top;
        int size;
        int* arr;

    public:
        Stack(int size){
            this->size=size;
            this->arr=new int[size];
            this->top=-1;
        }
    
        void push(int data){
            if(size-top>1){
                top++;
                arr[top]=data;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }

        void pop(){
            if(top==-1){
                cout<<"Stack UnderFlow"<<endl;
            }
            else{
                top--;
            }
        }

        void peek(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<arr[top]<<endl;
            }
        }

        bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        int getsize(){
            return (top+1);
        }

};

int main(){

    //dynamic
    // Stack* stk= new Stack(10);
    // stk->push(10);
    // stk->push(20);
    // stk->push(30);
    // stk->push(40);
    // stk->push(50);
    // stk->push(60);
    // stk->push(70);
    // stk->push(80);
    // stk->push(90);
    // stk->push(100);
    // stk->push(110);

    // cout<<"size: "<<stk->getsize()<<endl;
    // while(!stk->isempty()){
    //     stk->peek();
    //     stk->pop();
    // }
    // cout<<"size: "<<stk->getsize()<<endl;
    // stk->pop();

    //static but still dynamic cuz of array

    Stack stk(5);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    cout<<"size: "<<stk.getsize()<<endl;
    while(!stk.isempty()){
        stk.peek();
        stk.pop();
    }
    cout<<"size: "<<stk.getsize()<<endl;
    stk.pop();


    
  return 0;
}