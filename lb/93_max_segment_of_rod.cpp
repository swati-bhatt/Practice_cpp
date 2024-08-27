#include <iostream>
using namespace std;

int maxSegment(int N, int x, int y, int z){
    int mini=min(x,min(y,z));
    if(N>=0 && N<mini){
        return 0;
    }
    if(N<0){
        return INT_MIN;
    }
    int a=maxSegment(N-x, x,y,z)+1;
    int b=maxSegment(N-y, x,y,z)+1;
    int c=maxSegment(N-z, x,y,z)+1;

    int maxi=max(a,max(b,c));
    return maxi;
}
int main(){
  cout<<maxSegment(10,4,4,5);
  return 0;
}