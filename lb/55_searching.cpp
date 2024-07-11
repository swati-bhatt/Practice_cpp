#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//for sorted array only
//complexity O(logn)
int binarySearch ( vector <int> v , int n, int key){
    int index=-1;
    int left=0, right=n-1;
    int mid=(left+right)/2;

    // // use mid = s+((e-s)/2) or s/2 +e/2 
    // s is start e is end
    // no overflow condition

    while(left<=right){
        int element=v[mid];
       
        if (element==key){
            index=mid;
        }
        else{
            if(element<v[mid]){
                right=mid-1;
            }
            else{
                left=mid+1; 
            }
        }
         int mid=(left+right)/2;
    }
    return index;
}

// complexity O(n)
int linearSearch ( vector <int> v , int n ,int key){
    int index=-1;
    for (int i=0; i<n; i++){
        if(v[i]==key){
            index=i;
        }
    }
    return index;
}
int main(){
    vector <int> vnew;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"enter elements"<<endl;
    for (int i=0; i<n; i++){
        int element;
        cin>>element;
        vnew.push_back(element);
    }

    int key;
    cout<<"Enter Element u want to search: ";
    cin>>key;

    sort (vnew.begin(), vnew.end());

    // int index= binarySearch(vnew, n , key);
    // if(index==-1){
    //     cout<<"Element not found:)"<<endl;
    // }
    //  else{
    //     cout<<"Element found at "<<index<<"th index.\n";
    // }  

    if(binary_search(vnew.begin(), vnew.end(), key)){
        cout<<"Found";
    }
    else{
        cout<<"not found";
    }
  
    return 0;
}