#include <iostream>
#include <vector>

using namespace std;

int solve(vector <int> & arr, int target){
    if(target==0){
        // cout<<"target is 0 returning 0 "<<endl;
        return 0;
    }
    // if(target<0){
    //     // cout<<"target is -ve returning INT_MAX "<<endl;
    //     return INT_MAX;
    // }
    
    int mini=INT_MAX;
    // cout<<"value of mini "<<mini<<endl;
    for(int i=0; i<arr.size(); i++){
        // cout<<"i= "<<i<<" arr[i]= "<<arr[i]<<endl;
        // cout<<"passing array and "<<target-arr[i]<<endl;
        if(target-arr[i]>=0){
            int ans= solve(arr, target-arr[i]);
        // cout<<"ans is: "<<ans<<endl;
        // if(ans<INT_MAX){
            mini=min(ans+1,mini);
            // cout<<"value of mini "<<mini<<endl;
        // }

        }
        
    }
    // cout<<"returning "<<mini<<endl;
    return mini;
}

int main(){
    vector <int> arr {1,2};
    cout<<solve(arr,5)<<endl;
  
  return 0;
}