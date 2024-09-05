#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main(){
  vector <int> input={2,1,5,6,2,3};
  vector<int> prev(input.size());
  stack <int> s;
  s.push(-1);

  //for element
    // for(int i=0; i<input.size(); i++){
    //     int curr=input[i];

    //     while(s.top()>=curr){
    //         s.pop();
    //     }
    //     prev[i]=s.top();
    //     s.push(curr);
    // }

    //for indexes
    for(int i=0; i<input.size(); i++){
            int curr=input[i];

            while((s.top()!=-1) &&(input[s.top()]>=curr)){
                s.pop();
            }
            prev[i]=s.top();
            s.push(i);
        }


    for(auto i: input){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:prev){
        cout<<i<<" ";
    }
  return 0;
}