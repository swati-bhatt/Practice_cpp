#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int start=0; 
//         int end=nums.size()-1;
//         int mid=start+(end-start)/2;

//         int brIndex=0;

//         //rotated 
//         if(nums[start]>nums[end]){
//             while(start<=end){
//                 if(nums[mid]<nums[mid-1]){
//                     brIndex=mid;
//                     break;
//                 }
//                 else if(nums[mid]>nums[end]){
//                     start=mid+1;
//                 }
//                 else{
//                     end=mid-1;
//                 }
//                 mid=start+(end-start)/2;
//             }
//         }

//         //left search
//         if (target>nums[nums.size()-1]){
//             start=0;
//             end=brIndex-1;
//         }
//         //right search
//         else{
//             start=brIndex;
//             end=nums.size()-1;
//         }
//         mid=start+(end-start)/2;

//         while(start<=end){
//             if(nums[mid]==target){
//                 return mid;
//             }
//             else if(nums[mid]>target){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//             mid=start+(end-start)/2;
//         }
//         return -1;   
//     }
// };

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start=0;
        int size= nums.size()-1; 
        int end=size;
        int mid=start+(end-start)/2;

        int brIndex=0;

        //rotated 
        if(nums[start]>nums[end]){
            while(start<=end){
                if(nums[mid]>nums[mid+1] ){
                    brIndex=mid;
                    break;
                }
                else{
                    if(nums[0]<=nums[mid]){
                        start=mid+1;
                    }
                    else{
                        end=mid-1;
                    }
                }
                mid=start+(end-start)/2;
            }

            //left search
            if (target>nums[size]){
                start=0;
                end=brIndex;
            }
            //right search
            else{
                start=brIndex+1;
                end=size;
            }
        }
        else{
            start=0;
            end=size;
        }  
        cout<<start<<" "<<end<<" "<<brIndex<<endl;
        mid=start+(end-start)/2;

        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;  
    }

};


int main(){
    vector <int> arr{8,9,2,3,4};
    Solution sol;
    cout<<sol.search(arr,9);
  return 0;
}