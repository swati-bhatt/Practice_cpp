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

void reverse(stack <int> &s){
    if(s.empty() || s.size()==1){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,temp);
}

int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    //stack be like : 10 20 30 40 50 60(top)
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
  return 0;
}