#include <iostream>
using namespace std;

int partition (int arr[], int start, int end){

    int pivotIndex=start;
    int pivot=arr[start];
    int count=0;

//counting numbers less than pivot
    for(int i=start+1; i<end; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    pivotIndex=start+count;
    swap(arr[start], arr[pivotIndex]);
    int i=start;
    int j=end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int p= partition(arr,start,end);
    quicksort(arr, start, p-1);
    quicksort(arr,p+1,end);
}

int main(){
  int arr[]={10,15,29,27,32,32,32,32,32,85,44,26,76,32,48};
  int size=sizeof(arr)/sizeof(int);
  quicksort(arr,0,size);
  for(auto i:arr){
    cout<<i<<' ';
  }
  return 0;
}