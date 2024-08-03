#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowsum, vector<int>& colsum) {

        int maxr=INT_MIN;
        int indexr, indexc;
        int maxc=INT_MIN;
        // vector<vector<int> > restorematrix{rowsum.size(),vector<int>(colsum.size(),-1)};
        vector<vector<int> > restorematrix{rowsum.size(),vector<int>(colsum.size(),0)};
        int flag=rowsum.size()+colsum.size()-1;

        while(flag>0){
            for(int i=0; i<rowsum.size(); i++){
            if(rowsum[i]>maxr){
                maxr=rowsum[i];
                indexr=i;
                }
            }

            for(int j=0; j<colsum.size(); j++){
                if(colsum[j]>maxc){
                    maxc=colsum[j];
                    indexc=j;
                }
            }
            // if(flag==1 && maxr==maxc){
            //     //last element left
            //     restorematrix[indexr][indexc]=maxr;

            // }
            if(maxr>maxc){
                for(int k=0; k<rowsum.size();k++){
                    if(k==indexr){
                        restorematrix[indexr][indexc]=maxc;
                        colsum[indexc]=colsum[indexc]-maxc;
                        rowsum[indexr]=rowsum[indexr]-maxc;
                        maxr=maxr-maxc;
                        maxc=0;
                    }
                    // else if(restorematrix[k][indexc]>0){
                    //     continue;
                    // }
                    // else{
                    //     restorematrix[k][indexc]=0;
                    // }
                }
                cout<<flag<<"\n";
                flag--;
            }

            if(maxc>maxr){
                for(int k=0; k<colsum.size();k++){
                    if(k==indexc){
                        restorematrix[indexr][indexc]=maxr;
                        colsum[indexc]=colsum[indexc]-maxr;
                        rowsum[indexr]=rowsum[indexr]-maxr;
                        maxc=maxc-maxr;
                        maxr=0;
                    }
                    // else if(restorematrix[indexr][k]>0){
                    //     continue;
                    // }
                    // else{
                    //     restorematrix[indexr][k]=0;
                    // }
                }
                cout<<flag<<"\n";
                flag--;
            }

            if(maxr==maxc){
                if(maxr==0){
                    cout<<flag<<"\n";
                    flag-=2;
                }
                else{
                    for(int k=0; k<rowsum.size();k++){
                    if(k==indexr){
                        restorematrix[indexr][indexc]=maxc;
                        colsum[indexc]=colsum[indexc]-maxc;
                        rowsum[indexr]=rowsum[indexr]-maxc;
                    }
                    // else if(restorematrix[k][indexc]>0){
                    //     continue;
                    // }
                    // else{
                    //     restorematrix[k][indexc]=0;
                    // }
                    }

                    for(int k=0; k<colsum.size();k++){
                        if(k==indexc){
                            restorematrix[indexr][indexc]=maxr;
                            colsum[indexc]=colsum[indexc]-maxr;
                            rowsum[indexr]=rowsum[indexr]-maxr;
                        }
                        // else if(restorematrix[indexr][k]>0){
                        //     continue;
                        // }
                        // else{
                        //     restorematrix[indexr][k]=0;
                        // }
                    }
                    cout<<flag<<"\n";
                    maxc=0;
                    maxr=0;
                    flag-=2;

                }
                
            }

        
        for(auto r : restorematrix ){
        for(auto c :r){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
        }
    return restorematrix;   
    }
};

int main(){
    Solution result;
    vector<int>r{4,12,10,1,0};
    vector<int> c{1,0,3,16,7};
    vector<vector<int> > ans = result.restoreMatrix(r,c);
    // for(auto r : ans ){
    //     for(auto c :r){
    //         cout<<c<<" ";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}
