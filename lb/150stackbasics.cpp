#include <iostream>
//include stack
#include <stack>

using namespace std;

int main(){
    //creation of stack
    stack <int> stk;
    //push
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    //size
    cout<<"Size of stack is "<<stk.size()<<endl;

    //empty, pop, top
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    //empty
    if(stk.empty()){
        cout<<endl<<"Stack is empty now"<<endl;
    }
    // stk.pop();
  
  return 0;
}