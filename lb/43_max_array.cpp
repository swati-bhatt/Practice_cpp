#include <iostream>

using namespace std;

int main(){
    int array[]={90,43,56,28,34,97,13,82,25,44};
    int size= sizeof(array)/sizeof(int);
    
    // int max=array[0], min=array[0];
    int max=INT_MIN, min=INT_MAX;
    int index1=0, index2=0;
    
    // for(int i=1; i<size; i++){
    for(int i=0; i<size; i++){
            if(max<array[i]){
                max=array[i];
                index1= i;
            }
    }
    // for(int i=1; i<size; i++){
     for(int i=0; i<size; i++){
            if(min>array[i]){
                min=array[i];
                index2= i;
            }
    }
    cout<<"max element is: "<<max<<" found at "<< index1<<"th index"<<endl;
    cout<<"min element is: "<<min<<" found at "<< index2<<"th index"<<endl;
}

