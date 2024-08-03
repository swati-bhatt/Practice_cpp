#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> luckyNumber (vector<vector<int>>& matrix) {
        int min=INT_MIN;
        int max=INT_MAX;
        vector <int> ans;
        int row=matrix.size();
        int col= matrix[0].size();

        for(int i=0; i<row; i++){
            int min1=INT_MAX;
            for(int j=0; j<col; j++){
                if(matrix[i][j]<min1){
                    min1=matrix[i][j];
                }
            }
            if(min1>min){
                min=min1;
            }
        }
        for(int i=0; i<col; i++){
            int max1=INT_MIN;
            for(int j=0; j<row; j++){
                if(matrix[j][i]>max1){
                    max1=matrix[j][i];
                }
            }
            if(max1<max){
                max=max1;
            }
        }
        cout<<min<<" "<<max<<endl;
        if(min==max){
            ans.push_back(min);
        }
        return ans;
    }

    // vector<int> luckyNumbers(vector<vector<int>>& matrix) {

    //     vector <int> ans;
    //     vector <int> rowmin;
    //     vector <int> colmax;

    //     for(int i=0; i<matrix.size(); i++){
    //         int min=INT_MAX;
    //         int max=INT_MIN;

    //         for(int j=0; j<matrix[i].size(); j++){
    //             if(matrix[i][j]<min){
    //                 min=matrix[i][j];
    //             }
    //             if(matrix[j][i]>max){
    //                 max=matrix[j][i];
    //             }
    //         }  
    //         cout<<min<<" "<<max<<endl;
    //         rowmin.insert(rowmin.begin()+i, min);
    //         colmax.insert(colmax.begin()+i, max); 
    //     }

    //     for(int i=0; i<matrix.size(); i++){
    //         for(int j=0; j<matrix[i].size(); j++){
    //             if(matrix[i][j]==rowmin[i] && matrix[i][j]==colmax[j]){
    //                 ans.push_back(matrix[i][j]);
    //             }
    //         }
    //     }
    //     return ans;    
    // }
};



int main(){
    vector <vector <int> > arr{
         {1,10,4,2},
         {9,3,8,7},
         {15,16,17,12}
    };
    Solution sol;
    for (auto i :sol.luckyNumber(arr)){
        cout<<i;
    }
  return 0;
}