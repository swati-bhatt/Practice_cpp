#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseKQueue(queue <int> &q, int k){
    if(k<=1 || k>q.size()){
        return;
    }
    stack <int> s;
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=k; i<q.size(); i++){
        q.push(q.front());
        q.pop();
    }

}

int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    int k = 2;
    reverseKQueue(q,6);
    // Printing queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
  
  return 0;
}