#include <iostream>
#include <vector>

using namespace std;

void print(vector <vector<int> > v){
    // for(int i=0; i<v.size(); i++){
    //     for(int j=0; j<v[i].size(); j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for (auto & row : v){
        for(auto col: row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

int main(){

//method 1
    vector<vector<int> > v1;

    vector<int> a {1,2,3} ;
    vector<int> b {4,5,6,8,9} ;
    vector<int> c {7,2,6} ;
    
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);

    print(v1);

//method 2
    vector <vector<int> > v2{
        {1,2, 3},
        {4,5,6}, 
        {7,8,9},
    };
    print(v2);

//method3
    int rows, cols;
    cout<<"enter rows and cols: \n";
    cin>>rows>>cols;
    vector <vector<int> > v3 (rows, vector<int>(cols, 12));
    print(v3);
  return 0;
}