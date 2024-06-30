#include <iostream>

using namespace std;
const float pi =3.14; 

float areaCircle(int radius){
    return pi*radius*radius;
}

void evenOdd(int r){
    if((r&1)==0){
        cout<<r <<" is even"<<endl;
    }
    else{
        cout<<r <<" is odd"<<endl;
    }
}

int factorial(int r){
    int i=1;
    int fact=1;
    while(i<=r){
        fact=fact*i;
        i++;
    }
    return fact; 
}

int prime( int r){
    for(int i=2; i<=sqrt(r); i++){
        if(r%i==0){
            return 0;
        }
    }
    return 1;
}

void printPrime(int n){

    for(int i=2; i<n; i++){
        int flag=-1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==-1){
            cout<<i<<" ";
        }
    }

}

int main(){
    int r;
    cout<<"enter radius"<<endl;
    cin>>r;
    cout<<"Area of circle is: "<<areaCircle(r)<<endl;
    evenOdd(r);
    cout<<"factorial of "<<r <<" is : "<<factorial(r)<<endl;
    int p =prime(r);
    if(p){
        cout<<r<<" is Prime"<<endl;
    }
    else{
        cout<<r<<" is Not prime"<<endl;
    }
    int num;
    cout<<"Enter no. till which u want to print prime numbers: "<<endl;
    cin>>num;
    printPrime(num);

  return 0;
}