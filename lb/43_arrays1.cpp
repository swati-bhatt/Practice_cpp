#include <iostream>

using namespace std;

int main(){
    int arr[10];
    int n;
    cout<<"enter no of elements:";
    cin>>n;
    cout<<"enter elements: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"original array";
    cout<<arr;
    cout<<"doubles are as follows:"<<endl;
    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<endl;
    }
    for(int i=0; i<n; i++){
        arr[i]=1;
    }
     cout<<"new array is as follows: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    //memset()
     cout<<"new array with every element as 0 is as follows: "<<endl;
     memset(arr,0,sizeof(arr));
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    //garbage value
    cout<<"new array with every element as 1 is as follows: "<<endl;
    memset(arr,true,sizeof(arr));
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"new array with every element as 1 is as follows: "<<endl;
    memset(arr,-1,sizeof(arr));
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    
    cout<<"Original String"<<endl;
    char str[]="nacho";
    cout<<str<<endl;
    for(int i=0; i<sizeof(str); i++){
        cout<<str[i];
    }
    cout<<endl;
     cout<<"memset on string values:"<<endl;
    memset(str,'s',sizeof(str)-1);
    cout<<str<<endl;
    for(int i=0; i<sizeof(str)-1; i++){
        cout<<str[i];
    }
    
}