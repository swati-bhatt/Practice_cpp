#include <iostream>

using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string snew=s;
        int start=0;
        int end=s.size()-1;

        while(start<end){
            if((s[start]>='a' && s[start]<='z') || (s[start]>='A' && s[start]<='Z')){
                if((s[end]>='a' && s[end]<='z' )|| (s[end]>='A' && s[end]<='Z')){
                    char temp=snew[start];
                    snew[start]=snew[end];
                    snew[end]=temp;
                    start++;
                    end--;
                }
                else{
                    end--;
                }    
            }
            else{
                start++;
            }    
        }
        return snew; 
    }
};

int main(){
    Solution sol;
   cout<< sol.reverseOnlyLetters("ab-cd");
  
  return 0;
}