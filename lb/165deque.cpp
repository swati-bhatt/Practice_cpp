#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque <int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    cout<<"size of deque is:"<<dq.size()<<endl;
    while(!dq.empty()){
        cout<<dq.back()<<" ";
        dq.pop_back();
        cout<<dq.front()<<" ";
        dq.pop_front();
    }


  
  return 0;
}