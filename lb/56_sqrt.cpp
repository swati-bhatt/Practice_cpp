#include <iostream>

using namespace std;

float sqroot(int key){
    int start=0, end=key;
    int mid= start+((end-start)/2);
    float ans=0;
    while (start<=end){
        if(mid*mid==key){
            ans=mid;
            break;
        }
        else if(mid*mid<key){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+((end-start)/2);
    } 
    return ans;

}

int main(){
    int key;
    cout<<"enter number:";
    cin>>key;
    float ans=sqroot(key);
    cout<<ans<<endl;

    int precision;
    cout<<"enter no of decimal places u want to ans upto: ";
    cin>>precision;

    double step=0.1;
    double finalans= ans;

    for(int i=0; i<precision; i++){
        for(double j=finalans; j*j<=key; j+=step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<finalans;
  
  return 0;
}