#include <iostream>
#include <queue>
using namespace std;

void interleave(queue <int> &q){
    if(q.size()<3){
        return;
    }
    queue <int> temp;
    int n=q.size()/2;
    for(int i=0; i<n; i++){
        temp.push(q.front());
        q.pop();
    }
    while(!temp.empty()){
        q.push(temp.front());
        q.push(q.front());
        temp.pop();
        q.pop();
    }
    //for odd no of elements
    if(q.size()&1){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);

    interleave(q);
    // Printing queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
  
  
  return 0;
}