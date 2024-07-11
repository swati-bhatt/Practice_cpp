#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int size= nums.size();
        int i=0;
        for(i; i<size;){
            cout<<"i= "<<i<<endl;
            if(nums[i]==1){
                int initialIndex=i;
                i++;
                cout<<"one found Initial index  "<<initialIndex<<" i is "<<i<<endl;
                while(nums[i]==1 && i<size){
                    i++;
                    cout<<"In while loop i is "<<i<<endl;
                }
                int finalIndex=i;
                cout<<"finla index is "<<finalIndex<<endl;
                cout<<"count was "<<count<<endl;
                if(count<(finalIndex-initialIndex)){
                    count=finalIndex-initialIndex;
                    cout<<"count currently is "<<count<<endl;
                }
            }
            else{
                i++;
                cout<<"found 0  incrementing i now i is "<<i<<endl;;
            }
            cout<<endl<<endl;
        }
        return count;    
    }
};

int main(){
  vector <int> arr{
        1,1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,0
    };
    Solution sol;
    cout<<sol.findMaxConsecutiveOnes(arr);
  return 0;
}