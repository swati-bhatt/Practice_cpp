#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    else if(n<1){
        cout<<"invalid input";
        return 0;
    }
        int ans=n*factorial(n-1);
    return ans;
}
void printReverseCounting(int n){

    if(n==0){
        return;
    }
        cout<<n<<" ";
        printReverseCounting(n-1);
}

void printCounting(int n){

    if(n==0){
        return;
    }
        printCounting(n-1);
        cout<<n<<" ";
}

int power(int n){
    if(n==0){
        return 1;
    }
    return 2*(power(n-1));
}

int fibonacci(int n){
     
    if(n==0 || n==1){
        // cout<<n<<" ";
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    // return nextTerm;

}


int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    cout<<"factorial of "<<n <<" is: "<<factorial(n)<<endl;
    cout<<"reverse counting: ";
    printReverseCounting(n);
    cout<<endl;
    cout<<"counting: ";
    printCounting(n);
    cout<<endl;
    cout<<"2 raise to power "<<n<<" is: "<<power(n)<<endl;
    cout<<"fibonacci series "<<fibonacci(n)<<endl;
  return 0;
}