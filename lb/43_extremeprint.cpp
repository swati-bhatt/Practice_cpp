#include <iostream>
using namespace std;

int main(){
    int a[]={1,2,3,5,8,10,12,54};
    int  size= sizeof(a)/sizeof(int);
    int j=size-1;
    for(int i=0; i<=j; i++, j--){
        if(i==j){
            cout<<a[i]<<" ";
        }
        else{
            cout<<a[i]<<" "<<a[j]<<" ";
        }
    }


}