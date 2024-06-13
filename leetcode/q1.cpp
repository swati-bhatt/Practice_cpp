#include <iostream>
#include <vector>

using namespace std;
// class Solution{
//  public:
    
// };
int main(){
int element, target, size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter elements: ";
    vector<int> nums;
    for(int i=0; i<size; i++)
    {
        cin>> element;
        nums.push_back(element);
    }
    cout<<"enter target: ";
    cin>> target;
    cout<<"output";
    //void twoSum(vector<int>& nums, int target){
        for(int i=0; i<nums.size(); i++){
            // if (nums[i]<=target){
                for(int j=i+1; j<nums.size(); j++){
                    if (nums[i]+nums[j]==target){
                        cout<<i<<" "<<j;
                    }
                }
               cout<< endl;
            // }
            // else{
            //     continue;
            // }
        }  
    // }
}

// for leetcode

// no main function 
// everthing in class soln 
// return type vector


