#include <iostream>
#include <vector>
using namespace std;

#include <vector>
class Solution {
public:
    vector <int> reverse(vector<int> &arr, int start, int end){
        while(start<=end){
            int temp=arr[end];
            arr[end]=arr[start];
            arr[start]= temp;
            start++;
            end--;
        }
        for(auto i : arr){
            cout<<i;
        }
        cout<<endl;
        return arr;
        
    }
    void rotate(vector<int> & nums, int k) {
        reverse(nums,0,k);
        reverse(nums,k+1, nums.size()-1);
        reverse(nums, 0, nums.size()-1);    
    }
};

int main(){
    Solution sol;
    vector <int> vec{
        1,2,3,4,5,6,7
    };
    sol.rotate(vec,3);
    for(auto i :vec){
        cout<<i;
    }
}