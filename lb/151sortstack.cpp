#include <iostream>
#include <stack>

using namespace std;

void correctPos(stack <int> &s, int key){
    if(s.empty() || s.top()<=key){
        s.push(key);
        return;
    }
    int temp=s.top();
    s.pop();
    correctPos(s,key);
    s.push(temp);
}

void sortStack(stack <int> &s){
    if(s.empty()|| s.size()==1){
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s);
    correctPos(s,temp);
}

int main(){
    stack <int> s;
    s.push(20);
    s.push(40);
    s.push(30);
    s.push(90);
    s.push(60);
    s.push(80);

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
  
  return 0;
}