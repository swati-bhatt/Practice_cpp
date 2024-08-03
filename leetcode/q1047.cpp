#include <iostream>
using namespace std;
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         int flag=0;
//         while(flag==0){
//             int lastItrErase=0;
//             int size=s.size();
//             for(int i=0; i<size; i++){
//                 if(s[i]==s[i+1] && i+1<size){
//                     s.erase(i,2);
//                     lastItrErase=1;
//                     cout<<s<<"\n";
//                 }
//             }
//             if(lastItrErase==0){
//                 flag=1;
//             }
//         }   
//      return s;   
//     }
// };

class Solution {
public:
    string removeDuplicates(string s) {
        string snew="";
        for(int i=0; i<s.size(); i++){
            int size=snew.size();
            if(snew[size-1]==s[i] && size!=0){
                snew.pop_back();
            }
            else{
                snew.push_back(s[i]);
            }
        }   
     return snew;   
    }
};

int main(){
    Solution sol;
    string s="abbaca";
    cout<<sol.removeDuplicates(s);
  
  return 0;
}