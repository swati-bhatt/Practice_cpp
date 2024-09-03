#include <iostream>
#include <stack>

using namespace std;

int findMiddle(stack<int> s, int totalSize){
    //-1 == stack is empty
    // if(totalSize==0){
    //     return -1;
    // }
    //case (Size=1)is also considered in next if
    if(s.size()==((totalSize/2)+1)){
        return s.top();
    }
    int temp=s.top();
    s.pop();
    return findMiddle(s, totalSize);
    s.push(temp);
}

int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int totalSize= s.size();
    cout<<findMiddle(s, totalSize)<<endl<<endl;
    
    cout<<"printing remaining stack "<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
  
  return 0;
}