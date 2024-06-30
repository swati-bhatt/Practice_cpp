#include <iostream>
#include <vector>

using namespace std;

//     1
//    232
//   34543
//  4567654
// 567898765


int main(){
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;
//my code
    for(int row=0; row<n; row++){
        int counter=row+1;
        
        for(int col=0; (col-row)<n; col++){
            if((row+col)<(n-1)){
                cout<<" ";
            }

            else if(col<n-1) {
                    cout<<counter;
                    counter++;
            }
            else{
                cout<<counter;
                counter--;
            }   
            }
        cout<<endl;
    }
// method 2
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        int count=row+1;
        for(int col=0; col<row+1; col++){
            cout<<count;
            count++;
        }
        int count2=row*2;
        for(int col=0; col<row;col++){
            cout<<count2;
            count2--;
        }

        cout<<endl;
    }

    return 0;
}
