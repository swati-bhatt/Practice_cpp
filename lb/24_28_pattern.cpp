#include <iostream>

using namespace std;

// 1 
// 1 2 
// 1   3 
// 1     4 
// 1 2 3 4 5
void pattern1(int n){

    for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        if(j==0 || i==n-1 || i==j ){
            cout<<j+1<<" ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
  }
}

// 1 2 3 4 5 
// 2     5 
// 3   5 
// 4 5 
// 5 
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; i+j<n; j++){
            if(i==0){
                cout<<j+1<<" ";
            }
            else if(j==0){
                cout<<i+1<<" ";
            }
            else if(i+j==n-1){
                cout<<n<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 
void pattern3(int n){
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=0; j<n*2-1; j++){
            if(i+j<n-1){
                cout<<"  ";
            }
            else if(j<n-1){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<count<<" ";
                count--;
                if(count==0){
                    break;
                }
            }
        }
        cout<<endl;
    }
}

// *         
// * *       
// * * *     
// * * * *   
// * * * * * 
// * * * *   
// * * *     
// * *       
// *  
void pattern4(int n){
    for(int i=0; i<n*2-1; i++){
        for(int j=0; j<n; j++){
            if(i<n){
                if (i>=j){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }    
            }
            else{
                if(i+j<n*2-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";;
                }
            }
        }
        cout<<endl;
    }
}

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
void pattern5(int n){
    for(int i=0; i<n; i++){
        int k=8-i;
        int count=i+1;
        for(int j=0; j<17; j++){
            if(j==k && count>0){
                cout<<i+1;
                k+=2;
                count--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}


int main(){
  int n;
  cout<<"Enter number: ";
  cin>>n;
  
    pattern1(n);
    cout<<endl;

    pattern2(n);
    cout<<endl;

    pattern3(n);
    cout<<endl;

    pattern4(n);
    cout<<endl;

    pattern5(n);
    cout<<endl;

  return 0;
}