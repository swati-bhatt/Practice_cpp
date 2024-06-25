#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector <int> vec ){
    int ans= 0;

    for(int i=0; i<vec.size();i++){
        ans= ans ^ vec[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    vector <int> new_vec(n);
    cout<<"enter elements: "<<endl;
    for (int i=0; i<new_vec.size(); i++){
        cin>>new_vec[i];
    }

    cout<<"unique element is: "<<findUnique(new_vec);
}