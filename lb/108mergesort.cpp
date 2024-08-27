#include <iostream>

using namespace std;
void merge(int arr[], int start, int end){
    
    int mid=start+(end-start)/2;
    int len1= mid-start+1;
    int len2= end-mid;
    int* arr1= new int[len1];
    int* arr2= new int[len2];

//copying values
    int k=start;
    for(int i=0; i<len1; i++,k++){
        arr1[i]=arr[k];
    }
    k=mid+1;
    for(int i=0; i<len2; i++,k++){
        arr2[i]=arr[k];
    }
//inserting into array
    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=start;

    while(leftIndex<len1 && rightIndex<len2){
        if(arr1[leftIndex]<arr2[rightIndex]){
            arr[mainIndex++]=arr1[leftIndex++];
        }
        else{
             arr[mainIndex++]=arr2[rightIndex++];
        }
    }
    while(leftIndex<len1){
        arr[mainIndex++]=arr1[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainIndex++]=arr2[rightIndex++];
    }
}

void mergesort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start, mid);
    mergesort(arr, mid+1,end);
    merge(arr,start,end);


}

int main(){
    int arr[]={10,15,29,27,32,85,44,26,76,32,48};
    int size=sizeof(arr)/sizeof(int);
    mergesort(arr,0,size);
    for (int i=0; i<size;i++){
        cout<<arr[i]<<' ';
    }
  return 0;
}