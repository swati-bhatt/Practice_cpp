# include <iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);

    // for(int i=size-1; i>=0; i--){
    //     cout<<arr[i]<<" ";
    // }

    int j=size-1;
    for(int i=0; i<j; j--, i++){
        // int temp=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        swap(arr[i], arr[j]);
    }
    for(int i=0; i<size; i++){
         cout<<arr[i]<<" ";
    }
   
}