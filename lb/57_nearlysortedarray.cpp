#include <iostream>
#include <vector>

using namespace std;

int search(int arr[], int target, int size){
    int start=0; 
    int end=size-1;
    int mid= start+((end-start)/2);
    int index=-1;

    while(start<=end){
        if (arr[mid]==target){
            return mid;
        }
        
        else if(mid-1>= start && arr[mid-1]==target ){
            return mid-1;
        }
        else if(mid+1<end && arr[mid+1]==target){
            return mid+1;
        }
        else if(target<arr[mid-1]){
            end=mid-2;
        }
        else{
            start=mid+2;
        }
        mid= start+((end-start)/2);    
    }
    return index;
}

int main(){

    int arr[]={10,2,20,30,40,50,60,70};
    int size=8;
    int target=2;
    cout<<"found at " << search(arr, target, size)<<"th position."<<endl;

  
  return 0;
}