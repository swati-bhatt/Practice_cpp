#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    vector <int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector <int> unionv;
        int i=0;
        int j=0;
        int lastel=INT_MIN;
        int size;
        while(i<n || j<m){

            if(i==n){
                for(j; j<m; j++){
                    if (lastel!=arr2[j]){
                         unionv.push_back(arr2[j]);
                         size=unionv.size();
                         lastel=unionv[size-1];
                    }
                   
                    cout<<"for i = "<<i<<" and j= "<<j<<endl;
                    for (auto k :unionv){
                        cout<<k<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(j==m){
                for(i; i<n;i++){
                    if (lastel!=arr1[i]){
                        unionv.push_back(arr1[i]);
                         size=unionv.size();
                         lastel=unionv[size-1];
                    }

                    cout<<"for i = "<<i<<" and j= "<<j<<endl;
                    for (auto k :unionv){
                        cout<<k<<" ";
                    }
                    cout<<endl;
                }
            }
            if(arr1[i]<arr2[j]){
                if (lastel!=arr1[i]){
                       unionv.push_back(arr1[i]);
                }

                cout<<"for i = "<<i<<" and j= "<<j<<endl;
                for (auto k :unionv){
                    cout<<k<<" ";
                }
                cout<<endl;
                i++;
            }
            else if(arr2[j]<arr1[i]){
                if (lastel!=arr2[j]){
                       unionv.push_back(arr2[j]);
                }

                cout<<"for i = "<<i <<" and j= "<<j<<endl;
                for (auto k :unionv){
                    cout<<k<<" ";
                }
                cout<<endl;
                j++;
            }
            //same elements in both array
            else {
                if (lastel!=arr2[j]){
                       unionv.push_back(arr2[j]);
                }

                cout<<"for i = "<<i <<" and j= "<<j<<endl;
                for (auto k :unionv){
                    cout<<k<<" ";
                }
                cout<<endl;
                i++;
                j++;
            }
                size=unionv.size();
                lastel=unionv[size-1];
        }
        return unionv;
    }
};

int main(){
    Solution sol;
    int n=5;
    int m=3;
    int arr1[]= {1,2,3,4,5};
    int arr2[]= {1,2,3};
    vector<int> s= sol.findUnion(arr1, arr2,n, m);
    for(auto i :s ){
        cout<<i<<" ";
    }
  
  
  return 0;
}