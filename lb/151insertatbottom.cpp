#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack <int> &s, int &key){
    if(s.empty()){
        s.push(key);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,key);
    s.push(temp);
}

int main(){
    stack <int> s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int key=10;
    insertAtBottom(s,key);
    key=0;
    insertAtBottom(s,key);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
  
  return 0;
}