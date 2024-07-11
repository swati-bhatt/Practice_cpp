#include <iostream>

using namespace std;

int oddOccuring(int arr[], int size){
    int start=0;
    int end= size-1;
    int mid= start+((end-start)/2);

        while(start<=end){
            if(start==end){
                return arr[mid];
            }
            //even
            if((mid&1)==0){
                // we are on lhs
                if(arr[mid]==arr[mid+1]){
                    // mid+1 already compared
                    start=mid+2;
                }
                //could be ans or we are on rhs
                else{
                    end=mid;
                }
            }
            //odd
            else{
                //we are on rhs
                if(arr[mid]==arr[mid+1]){
                    end=mid-1;
                }
                //odd hai aur not equal to next toh we are on lhs
                else{
                    start=mid+1;
                }
            }
            mid= start+((end-start)/2);
        }   
    return -1;
}
int main(){

    int arr[]={1,1,2,2,3,3,4,5,5,6,6};
    int size=sizeof(arr)/sizeof(int);

    cout<<oddOccuring(arr,size);
  
  return 0;
}