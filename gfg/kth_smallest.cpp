#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue <int> pq;
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        int size=arr.size();
        for(int i=k; i<size; i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};

int main(){
    vector <int> arr{7, 3, 8, 2, 6, 5, 1, 4};
    int k = 5;
    Solution sol;
    int ans = sol.kthSmallest(arr, k);
    cout<<"Ans = "<<ans;
    return 0;
  return 0;
}