#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int start=0; 
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        //odd occuring element will always be on even index therefore
        if((mid & 1)==1){
            mid+=1;
        }
        if(nums.size()==1){
            return nums[0];
        }

        while (start<=end){
            if(nums[mid]==nums[mid+1] && mid+1<nums.size()){
                //on LHS
                start=mid+2;
            }
            else{
                //on RHS or on element 
                if(nums[mid]==nums[mid-1] && mid-1>=0){
                    end=mid-2;
                }
                else{
                    return nums[mid];
                    break;
                }
            }
            mid=start+(end-start)/2;
            if((mid & 1)==1){
                mid+=1;
            }
        }
    return -1;    
    }
};

int main(){
    vector <int> arr{1,2,2,3,3};
    Solution sol;
    cout<<sol.singleNonDuplicate(arr);
  return 0;
}