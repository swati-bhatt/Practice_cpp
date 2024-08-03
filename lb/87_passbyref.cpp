#include <iostream>
#include <vector>

using namespace std;

//pass by value
void pbv(int a){
    a++;
}

//pass by refernce
void pbr(int &a){
    a++;
}

int* solve(){
    int a=5;
    int * p=&a;
    return p;
}

int main(){
  int a=5;
  pbv(a);
  cout<<a<<endl;
  pbr(a);
  cout<<a<<endl;
  cout<<solve();
  return 0;
}