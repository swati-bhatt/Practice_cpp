#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()>0){
            vector <int> newv;
            newv.push_back(nums[0]);
            int index=0;
            for(int i=1; i<nums.size(); i++){
                if(newv[index]<nums[i]){
                    newv.push_back(nums[i]);
                    index++;
                }
            }
            return newv.size(); 
        }
        else{
            return -1;
        }    
    }
};

int main(){
  
  return 0;
}
