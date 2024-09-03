#include <iostream>
using namespace std;

class Stack{
    private:
        int top1;
        int top2;
        int size;
        int* arr;

    public:
        Stack(int size){
            this->size=size;
            this->arr=new int[size];
            this->top1=-1;
            this->top2=size;
        }
    
        void push1(int data){
            if(top2-top1>1){
                top1++;
                arr[top1]=data;
            }
            else{
                cout<<"Stack 1 Overflow"<<endl;
            }
        }
        void push2(int data){
            if(top2-top1>1){
                top2--;
                arr[top2]=data;
            }
            else{
                cout<<"Stack 2 Overflow"<<endl;
            }
        }

        void pop1(){
            if(top1==-1){
                cout<<"Stack 1 UnderFlow"<<endl;
            }
            else{
                top1--;
            }
        }
         void pop2(){
            if(top2==size){
                cout<<"Stack 2 UnderFlow"<<endl;
            }
            else{
                top2++;
            }
        }

        void peek1(){
            if(top1==-1){
                cout<<"Stack 1 is empty"<<endl;
            }
            else{
                cout<<arr[top1]<<endl;
            }
        }
        void peek2(){
            if(top2==size){
                cout<<"Stack 2 is empty"<<endl;
            }
            else{
                cout<<arr[top2]<<endl;
            }
        }

        bool isempty1(){
            return(top1==-1);
        }
        bool isempty2(){
            return(top2==size);
        }

        int getsize1(){
            return (top1+1);
        }
        int getsize2(){
            return (size-top2);
        }

};

int main(){

    Stack s(6);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    s.push2(60);
    s.push1(10);
    s.push2(20);
    cout<<"size: "<<s.getsize1()<<endl;
     cout<<"size: "<<s.getsize2()<<endl;
    while(!s.isempty1()){
        s.peek1();
        s.pop1();
    }
    while(!s.isempty2()){
        s.peek2();
        s.pop2();
    }
    cout<<"size: "<<s.getsize1()<<endl;
    s.pop1();
    cout<<"size: "<<s.getsize2()<<endl;
    s.pop2();
    s.peek1();
    s.peek2();


    
  return 0;
}