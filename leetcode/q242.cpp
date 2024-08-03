#include <iostream>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        string tnew=t;
        if(t.size()!=s.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            cout<<"i: "<<i<<endl;
            cout<<tnew<<endl;
            for(int j=0; j<tnew.size(); j++){
                cout<<"j: "<<j<<endl;
                if(s[i]==tnew[j]){
                    tnew.erase(j,1);
                    cout<<tnew<<endl;
                    break;
                }
            }
        }
        if (tnew=="\0"){
            return true;
        }
        else{
            return false;
        }
        
    }
};

int main(){
    Solution sol;
    cout<<sol.isAnagram("ab","a");
  
  return 0;
}