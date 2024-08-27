#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[], int size, int i, bool& ans){
    if(i>=(size-1)){
        return;
    }
    if(arr[i]>arr[i+1]){
        ans=false;
        return;
    }
    solve(arr,size, i+1, ans);
}

void binarySearch(int arr[], int start, int end, int key,int & index){
    int mid=start+((end-start)/2);

    if(start>end){
        return;
    }
    if(arr[mid]==key){
        index=mid;
        return;
    }
    else if(arr[mid]>key){
        binarySearch(arr,start,mid-1,key,index);
    }
    else{
        binarySearch(arr,mid+1,end,key,index);
    }
}

// use return keyword with recursive code if u dont want values to change
int binaryS(int arr[], int start, int end, int key){
    int mid=start+((end-start)/2);

    if(start>end){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return binaryS(arr,start,mid-1,key);
    }
    else{
        return binaryS(arr,mid+1,end,key);
    }
}
void printSubsequence(string input, string output, int i){
    if(i>=input.size()){
        cout<<output<<endl;
        return;
    }

    //exclude string
    printSubsequence(input, output,i+1);

    //include string
    output.push_back(input[i]);
    printSubsequence(input, output,i+1);

}
int main(){
    bool checkSorted=true;
    int arr[]={10,20,30,40,50,60,70};
    int size= sizeof(arr)/sizeof(int);

    solve(arr, size, 0, checkSorted);
    if(checkSorted){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }
    int index=-1;
    binarySearch(arr, 0,size,50, index);
    cout<<"found at "<<index<<endl;
    cout<<"found at "<<binaryS(arr,0,size,70)<<endl;

    printSubsequence("abc","",0);
    return 0;

}

