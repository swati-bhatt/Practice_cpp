#include <iostream>
#include <vector>

using namespace std;

int rowsum(int brr[3][3], int rows, int cols){
    int sum[3]={0,0,0};
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum[i]+= brr[i][j];
        }
    }
    for(int i= 0; i<rows; i++){
        cout<<"sum of "<<i<<"th row is : "<<sum[i]<<endl;
    }
    return 1;
}

int colsum(int crr[3][3], int rows, int cols){
    int sum[3]={0,0,0};
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum[j]+= crr[i][j];
        }
    }
    for(int i= 0; i<cols; i++){
        cout<<"sum of "<<i<<"th col is : "<<sum[i]<<endl;
    }
    return 1;
}

int search(int drr[3][3], int rows, int cols, int key){
    int flag=0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(key == drr[i][j]){
                cout<< key <<" is at "<<i<<","<<j<< " index.\n";
                flag =1;
            }
        }
    }
    return flag;
}

int minmax(int err[3][3], int row, int col){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(min > err[i][j]){
                min=err[i][j];
            }
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(max < err[i][j]){
                max=err[i][j];
            }
        }
    }
    cout<<"max is: "<<max<<"\nmin is: "<<min<<endl;
    return 1;
}

int display(int frr[3][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<frr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 1;
}

int transpose(int grr[3][3], int rows, int cols){
    int hrr[3][3];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            hrr[j][i]=grr[i][j];
            }
        }
        display(hrr,3,3);
    return 0;
}

int main(){
    // int m,n;
    // cout<<"enter no of rows and columns: ";
    // cin>>n>>m;
    int arr[3][3];

    //inserting data into 2d array row wise
    cout<<"enter elements: ";
    for (int i = 0; i<3; i++){
        for (int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }
    display(arr, 3,3);
    rowsum(arr, 3,3);
    colsum(arr, 3,3);
    int k ;
    cout<<"enter element u want to search: ";
    cin>>k;

    if(search(arr, 3,3 ,k)){}
    else{
        cout<<k<<" not found\n";
    }
    minmax(arr, 3,3);

    transpose(arr,3,3);

    return 0;  
}