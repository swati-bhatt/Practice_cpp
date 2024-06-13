#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //     class Solution {
// public:
    // bool isPalindrome(int x) {
        int x,y;
        // cout<<"enter int:";
        cin>>x;
        if(x<0){
            // return false;
            y=0;
        }
        else if(x>=0 && x<10){
            // return true;
            y=1;
        }
        else{
            int size= log10(x)+1;
            int arr[size];
            for(int i=size-1; i>0 ; i--){
                    arr[i]=x%10;
                     x=x/10;
                }
                arr[0]=x;
            
            int last= size-1;
            for(int i=0; i<size/2; i++){
                if (arr[i]!=arr[last]){
                    // return false;
                    y=0;
                    break;
                }
                else{
                    last--;
                }
                // return true;
                y=1;
            }
            
        }
        cout<<y;
    }
// };
