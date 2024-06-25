#include <iostream>

using namespace std;

int main(){
    int count0=0,count1=0;
    int array[]={0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int size=sizeof(array)/sizeof(int);
    for(int i=0; i<size; i++){
        if(array[i]==1){
            count1+=1;
        }
        else if(array[i]==0){
            count0+=1;
        }
    }
    cout<<"0 is present: "<<count0<<" times"<<endl;
    cout<<"1 is present: "<<count1<<" times"<<endl;
}