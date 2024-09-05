#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<"Size of queue "<<q.size()<<endl;
  
  return 0;
}