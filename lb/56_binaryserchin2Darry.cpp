#include <iostream>
#include <vector>

using namespace std;

bool search( vector <vector<int> > vnew, int row, int col, int key){
    bool found=0;
    int start=0;
    int end= row*col-1;
    int mid= start+((end-start)/2);

    while(start<=end){
        int rownum=mid/col;
        int colnum=mid%col;

        if (vnew[rownum][colnum]==key){
            found=1;
            cout<<"found at "<<rownum+1<<" row & "<<colnum+1<<" col"<<endl;
            break;
        }
        else if(vnew[rownum][colnum]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+((end-start)/2);
    }
    return found;
}

int main(){
    int key;
    cout<<"enter key: "<<endl;
    cin>>key;
    vector <vector<int> > vnew{
        {1,2,3,4},
        {5,6,7,8},
        {11,23,56,78},
        {304,305,307,308}
    };

    // int row, col;
    // cout<<"enter row and col: "<<endl;
    // cin>>row>>col;

    // vector <vector<int> > vnew{row, vector<int>(col)};

    // for(int i=0; i<=row; i++){
    //     for(int j=0; j<=col; j++){
    //         cin>>vnew[i][j];
    //     }
    // }

    if(search(vnew,4,4,key)){
        cout<<"found :)\n";
    }
    else{
        cout<<"element not found:(\n";
    }
  
  return 0;
}