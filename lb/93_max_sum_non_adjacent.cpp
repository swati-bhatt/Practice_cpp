#include <iostream>
#include <vector>

using namespace std;

void solve(vector <int>& arr, int i, int sum, int& maxi){
    if(i>=arr.size()){
        maxi=max(sum,maxi);
        return;
    }

    //include
    solve(arr, i+2, sum+arr[i], maxi);
    //exclude
    solve (arr, i+1, sum, maxi);
}

int main(){
  vector <int> arr{2,1,4,9};
  int maxi=INT_MIN;
  solve(arr,0,0,maxi);
  cout<<maxi<<endl;
  return 0;
}