#include <iostream>

using namespace std;

int sumeven(int a){
    int sum=0;
    // for (int i=0;i<=a; i++){
    //     if(i%2==0){
    //         sum+=i;
    //     }
    // }

    for (int i=0;i<=a; i+=2){
            sum+=i;
    }
    return sum;
}

int main(){
    int a;
    cout<<"enter num: ";
    cin>>a;
    cout<<"required sum is: "<< sumeven(a)<<endl;
    return 0;
}