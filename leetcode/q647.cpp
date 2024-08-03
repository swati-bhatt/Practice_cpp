#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(string sstr){
        for(int s=0, e=sstr.size()-1; s<e; s++,e--){
            if(sstr[s]!=sstr[e]){
                return false;
            }
        }
        return true;
    }

    int countSubstrings(string s) {   
        int count=0;
        int length=1;
        while(length<=s.size()){
            for(int i=0; i<s.size(); i++){
                if(i+length<=s.size()){
                    cout<<s.substr(i,length)<<endl;
                    bool ans= isPalindrome(s.substr(i,length));
                    if(ans){
                        count++;
                    }   
                }

            }
            length++;
        } 
        return count;  
    }
};

int main(){
  Solution sol;
  cout<<sol.countSubstrings("aaa");
  return 0;
}