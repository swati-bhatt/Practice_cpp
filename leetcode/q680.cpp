#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    bool palindrome(string s){
        for(int st=0, e=s.size()-1; st<e; e--, st++){
            if(s[st]!=s[e]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
            string str1=s;
            string str2=s;
            for(int st=0, e=s.size()-1; st<e; e--, st++){
                if(s[st]!=s[e]){
                    str1.erase(st,1);
                    str2.erase(e,1);
                    break;
                }
            }
        cout<<str1<<endl<<str2<<endl;
        if(palindrome(str1) || palindrome(str2) || palindrome(s) ){
            return true;
        }
        else{
            return false;
        }      
    }
};

int main(){

    Solution sol;
    cout<<sol.validPalindrome("abc");  
  return 0;
}