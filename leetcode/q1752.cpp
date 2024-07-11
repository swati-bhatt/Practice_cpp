#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=0;
        for(int i=0; i<nums.size()-1; i++){
            cout<<"for i ="<<i<<endl;;
            if(nums[i]>nums[i+1]){
                flag+=1;
            }
            cout<< "1st element is "<<nums[i]<<" 2nd element is "<<nums[i+1]<<" flas is "<<flag<<endl;
            if(flag==2){
                cout<<"breaked here"<<endl;
                return false;
            }
        }
            return true;
    }
};

int main(){
    vector <int> arr{
        3,4,5,1,2
    };
    Solution sol;
    cout<<sol.check(arr);
    return 0;
}