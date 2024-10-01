#include <iostream>
#include<queue>
#include <vector>
using namespace std;

int main(){
    // max heap
    priority_queue <int> pq;
    // min heap

    // priority_queue < int, vector<int>, greater<int> > pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    cout<<pq.size()<<endl;;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    pq.push(80);
    pq.push(50);
    cout<<pq.size()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
  
  return 0;
}