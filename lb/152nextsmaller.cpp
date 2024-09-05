#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    vector <int> input={2,1,5,6,2,3};
    vector <int> next(input.size());
    stack <int> s;
    s.push(input.size());

    // //for elements
    // for(int i=(input.size())-1; i>=0; i--){
    //     int curr=input[i];

    //     while(s.top()>=curr){
    //         s.pop();
    //     }
    //     next[i]=(s.top());
    //     s.push(curr);
        
    // }

    for(int i=input.size()-1; i>=0; i--){
            int curr=input[i];

            while((s.top()<input.size()) &&(input[s.top()]>=curr)){
                s.pop();
            }
            next[i]=s.top();
            s.push(i);
        }

    for(auto i: input){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i: next){
        cout<<i<<" ";
    }

  
  return 0;
}