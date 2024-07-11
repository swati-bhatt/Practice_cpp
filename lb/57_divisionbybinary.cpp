#include <iostream>

using namespace std;

int quotient(int divident , int divisor){
    int start=0; 
    int end= abs(divident);
    int mid= start+((end-start)/2);
    int quotient=0;

    while(start<=end){
        if((abs(mid*divisor))==abs(divident)){
            quotient=mid;
            break;
        }
        else if(abs((mid*divisor))<abs(divident)){
            quotient=mid;
            start=mid+1;
            
        }
        else{
            end=mid-1; 
        }
        mid= start+((end-start)/2); 
    }
    return quotient;
}

int main(){

    int divisor,divident;
    cout<<"enter divident and divisor : "<<endl;
    cin>>divident>>divisor;
    if (divisor==0){
        cout<<"invalid Input"<<endl;
    }
    else{
        int ans= quotient(divident, divisor);
        cout<<ans<<endl;

        int precision;
        cout<<"enter precision: "<<endl;
        cin>>precision;

        double step=0.1;
        double finalans=ans;

        for(int i=0; i<precision; i++){
            for(double j=finalans; abs(j*divisor)<=abs(divident); j+=step){
                finalans=j;
            }
            step=step/10;
        }
        
        if((divisor<0 && divident >0)||(divisor>0 && divident<0)){
        finalans= -finalans;
        }
        cout<<finalans;
    }    
  return 0;
}