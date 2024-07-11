#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> newv;

    cout<<sizeof(newv)<<endl;
    cout<<newv.size()<<endl;

    newv.push_back(1);
    newv.push_back(2);
    newv.push_back(3);
    newv.push_back(4);

    for(auto element : newv){
        cout<<element<<" ";
    }

}