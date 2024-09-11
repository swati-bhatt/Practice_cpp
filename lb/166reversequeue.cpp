#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQueue(queue <int> &q){
    //using stack O(N) space
    // stack <int> s;
    // while(!q.empty()){
    //     s.push(q.front());
    //     q.pop();
    // }
    // while(!s.empty()){
    //     q.push(s.top());
    //     s.pop();
    // }

    //using recursion
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();
    reverseQueue(q);
    q.push(temp);
}


int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

  reverseQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
  return 0;
}