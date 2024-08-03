#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int start=0;
        int size=nums.size()-1;
        int end=size;
        int mid=start+(end-start)/2;
        cout<<start<<" "<<end<<" "<<mid<<"\n";

        //array is rotated;
        if(nums[end]<=nums[start]  && size>1 ){

            while(start<=end){
                if(nums[mid]>nums[mid+1]){
                     cout<<"breaking \n";
                    break;
                }
                else{
                    if(nums[size]>nums[mid]){
                        end=mid-1;

                    }
                    else {
                        start=mid+1;
                    }
                }
                mid=start+(end-start)/2;
                cout<<start<<" "<<end<<" "<<mid<<"\n";
            }
            cout<<"mid is :" <<mid<<endl;

            if(nums[size]>=target){
                start=mid+1;
                end=size;
            }
            else{
                start=0;
                end=mid;
            }
        }
        cout<<"start "<<start<<" end "<<end<<endl;

        mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return false;
    }

};

int main(){
    vector <int> arr{1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    vector <int> ind{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8};
    Solution sol;
    cout<<sol.search(arr,0);
    return 0;
}