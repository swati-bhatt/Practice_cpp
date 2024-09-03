#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <char> stk;
    string str="swati";
    string strnew;
    for(int i=0; i<str.length(); i++){
        stk.push(str[i]);
    }
    while(!stk.empty()){
        strnew=strnew+stk.top();
        cout<<stk.top();
        stk.pop();
    }
    cout<<endl<<strnew<<endl;
  return 0;
}