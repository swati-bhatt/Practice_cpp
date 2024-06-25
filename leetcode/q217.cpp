#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> nums) {
        bool result=false;
        // int size= sizeof(nums)/sizeof(int);

        for(int i=0; i<nums.size();i++){
            if(result==true){
                break;
            }
            else{
                for(int j=i+1; j<nums.size(); j++){
                    if (nums[i] == nums[j]){
                        result=true;
                            break;
                    }
                    else{
                        continue;
                    }
            }

            }
            
        }
        // cout<<nums.size();
        return result;    
    }
};

int main(){
    Solution final;

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    cout<<final.containsDuplicate(a)<<endl;
}