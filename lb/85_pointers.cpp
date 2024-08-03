#include <iostream>
using namespace std;

int main(){
  int arr[5]={10,12,14,16,18};
  cout<<arr<<endl;
  cout<<&arr[0]<<endl;
  cout<<&arr<<endl;
  cout<<arr[0]<<" "<<0[arr]<<" "<< *(arr)<<endl;
  cout<<arr[2]<<" "<<2[arr]<<" "<< *(arr+2)<<endl;

  cout<<*(arr+2)+1;
  return 0;
}