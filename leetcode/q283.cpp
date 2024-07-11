#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size= nums.size();
        int last= size-1;
        for(int i=0; i<size && i<last; i++){
            if(nums[i]==0){
                nums[i]=nums[last];
                nums[last]=0;
                last--;
            }

            cout<<"array at i= "<<i<<" last is "<<last<<endl;
            for(auto j:nums){
            cout<<j<<" ";
            }
            cout<<endl;

        }   
    }
};

int main(){
    Solution sol;
    vector <int> vec{0,1,0,3,12};
    sol.moveZeroes(vec);
    for(auto i :vec){
        cout<<i<<" ";
    }
  
  return 0;
}