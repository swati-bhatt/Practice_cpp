#include <iostream>

using namespace std;

// //1 based indexing
// void heapify(int arr[], int size, int index){
//     int rightChild=2*index; 
//     int leftChild=2*index+1;
//     int largest=index;

//         if(rightChild<size && arr[largest]<arr[rightChild]){
//             largest=rightChild;
//         }
//         if(leftChild<size && arr[largest]<arr[leftChild]){
//             largest=leftChild;
//         }
//         if(index!=largest){
//             swap(arr[largest], arr[index]);
//             heapify(arr, size, largest);
//         }
// }

// void buildHeap(int arr[], int size){
//    for(int i=size/2; i>0; i--){
//         heapify(arr, size, i);
//     }
// }

//0 based indexing
void heapify(int arr[], int size, int index){
    int rightChild=2*index+1; 
    int leftChild=2*index+2;
    int largest=index;

        if(rightChild<size && arr[largest]<arr[rightChild]){
            largest=rightChild;
        }
        if(leftChild<size && arr[largest]<arr[leftChild]){
            largest=leftChild;
        }
        if(index!=largest){
            swap(arr[largest], arr[index]);
            heapify(arr, size, largest);
        }
}

void buildHeap(int arr[], int size){
   for(int i=size/2-1; i>=0; i--){
        heapify(arr, size, i);
    }
}



int main(){

    // int arr[]={-1, 10, 15, 56, 40, 20, 30, 65, 80, 39};
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int size=sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    buildHeap(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}