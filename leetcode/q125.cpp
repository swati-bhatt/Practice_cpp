#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string newStr;
        for(int i=0; i<s.size(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                newStr.push_back(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                newStr.push_back(s[i]-'A'+'a');
            }
            else{
                continue;
            }
        }
        bool result=true;
        for(int s=0, e=newStr.size()-1; s<e; s++,e-- ){
            if(newStr[s]!=newStr[e]){
                result=false;
                break;
            }
        }
        cout<<newStr<<endl;
        return result;   
    }
};

int main(){
    Solution sol;
    cout<<sol.isPalindrome("0p");
  
  return 0;
}