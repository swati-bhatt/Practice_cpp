#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    
    for(int row=0; row<n;row++){
        int count=1;
        for(int col=0; col-row<n; col++){
            if(row==n-1 && (col-row)%2==0 ){
                cout<<count;
                count++;
            }
            else if(row+col==n-1){
                cout<<"1";
            }
            else if(col-row==n-1 && row!=0){
                cout<<row+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
  return 0;
}