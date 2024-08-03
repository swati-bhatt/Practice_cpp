#include <iostream>
#include <vector>

using namespace std;

int findPivot(vector <int> vec){
    int start=0;
    int size=vec.size()-1;
    int end=size;
    int mid=start+(end-start)/2;
    cout<<start<<" "<<end<<" "<<mid<<"\n";

    while(start<=end){
        if(vec[mid]>vec[mid+1]){
            cout<<"retuning value \n";
            return mid;
        }
        else{
            //left sorted pivot will lie on right
            if(vec[start]<=vec[mid]){
                start=mid+1;
            }
            else{
                //right sorted pivot will lie on left
                end=mid-1;
            }
        }
        mid=start+(end-start)/2;
        cout<<start<<" "<<end<<" "<<mid<<"\n";
    }
    return mid;
}

int main(){
    vector <int> vec{4,5,1,2,3};
    cout<<findPivot(vec); 
  return 0;
}


//  int start=0;
//         int size=nums.size();
//         int end=size-1;

//         int mid=start+(start-end)/2;

//         if (nums[start]<nums[end]){
//             return nums[start];
//         }
//         else{
//             while(start<=end){
//                 if(nums[mid]>nums[mid+1]){
//                     break;
//                 }
//                 else{
//                     //left half sorted
//                     if(nums[mid]>nums[start]){
//                         start=mid+1;
//                     }
//                     //right half sorted
//                     else{
//                         end=mid-1;
//                     }
//                 }
//                 mid=start+(start-end)/2; 
//             }
//             return nums[mid+1];
//         }
        
//     }