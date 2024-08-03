#include <iostream>
#include <string.h>

using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        string snew="";
        for(int i=0;i<s.size();i++){
            int flag=0;
            if(snew.size()>=part.size()){
                for(int j=snew.size()-1, k=part.size()-1; k>=0 ;k--,j--){
                    if(snew[j]!=part[k]){
                        flag=1;
                        snew.push_back(s[i]);
                        cout<<"for if \n";
                        break;
                    }
                }
                if(flag==0){
                    snew.erase(snew.size()-part.size(), part.size());
                    cout<<"flag wala if\n";
                    i--;
                }
            }
            else{
                snew.push_back(s[i]);
                cout<<"else\n";
            }
            cout<<i<<" "<<snew<<endl<<endl;
        }
        if(snew.size()>=part.size()){
            int flag=0;
            for(int j=snew.size()-1, k=part.size()-1; k>=0 ;k--,j--){
                    if(snew[j]!=part[k]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    snew.erase(snew.size()-part.size(), part.size());
                    cout<<"last condition\n";
                }

        }
        
     return snew;   
    }
};

int main(){
    Solution sol;
    cout<<sol.removeOccurrences("daabcbaabcbc","abc")<<endl;;
  
  return 0;
}