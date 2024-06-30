#include <iostream>
#include <vector>

using namespace std;

int main(){
  int arr[5][5];
  int brr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

  cout<<"row wise: \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // cout<< "element at " <<i <<"th and "<<j<<"th position is: " <<brr[i][j]<<"\n";
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
    
  }

  cout<<"column wise: \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // cout<< "element at " <<j <<"th and "<<t<<"th position is: " <<brr[j][i]<<"\n";
      cout<<brr[j][i]<<" ";
    }
    cout<<endl;
    
  }
    
  return 0;
}