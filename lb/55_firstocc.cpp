#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstOccurance(vector <int> arr, int size, int key){
    int index=-1;
    int start= 0, end=size-1;
    int mid= (start/2)+(end/2);

    while(start<=end){
        int element= arr[mid];
        if(element==key){
            index=mid;
            end=mid-1;
        }
        else{
            if(element<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        mid=(start/2)+(end/2);
    }
    return index;
}
int lastOccurance(vector <int> arr, int size, int key){
    int index=-1;
    int start= 0, end=size-1;
    int mid= (start/2)+(end/2);

    while(start<=end){
        int element= arr[mid];
        if(element==key){
            index=mid;
            start=mid+1;
        }
        else{
            if(element<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        mid=(start/2)+(end/2);
    }
    return index;

}

int main(){
    vector <int> arr{1,2,3,4,4,4,4,4,5,5,5,6,7,8};
    // int size = sizeof(arr)/sizeof(int);
    int key= 4 ;
    auto lb= lower_bound (arr.begin(),arr.end(),key);
    cout<<lb-arr.begin()<<endl;
    auto ub= upper_bound (arr.begin(),arr.end(),key);
    cout<<ub-arr.begin()<<endl;
    //Total occurance= last-first+1 
    cout<<firstOccurance(arr,arr.size(),key)<<endl;
    cout<<lastOccurance(arr,arr.size(),key);


    return 0;
} 