#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:	
	int count(int arr[], int n, int x) {
	    
	    int start=0;
	    int end=n-1;
	    int mid=start+(end-start)/2;
	    int u=-1;
	    
	    //upper bound
	    while(start<=end){
	        if(arr[mid]<=x){
	            if(arr[mid]==x){
	                u=mid;
	            }
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	        mid=start+(end-start)/2;
	    }
	    
	    
	    start=0;
	    end=n-1;
	    mid=start+(end-start)/2;
	    int l=-1;
	    
	    //lower bound
	    while(start<=end){
	        if(arr[mid]>=x){
	            if(arr[mid]==x){ 
	                l=mid;
	            }
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	        mid=start+(end-start)/2;
	    }
        cout<<l<<" "<<u<<endl;
	    if(u==-1 && l==-1){
	        return 0;
	    }
	    else{
	        return (u-l)+1;
	    }
	    
	}
};

int main(){
    int arr[]={5,5, 6, 6, 7, 7 ,7 ,8, 9, 10, 11, 13, 14, 15, 16};
    Solution sol;
    cout<<sol.count(arr,15,7);
  return 0;
}