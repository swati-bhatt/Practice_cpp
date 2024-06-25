#include <iostream>
#include <vector>

using namespace std;

vector <int> createVector(int size){
    vector <int> vnew;
    int c;
    for(int i=0; i<size; i++){
        cin>>c;
        vnew.push_back(c);
    }
    return vnew;
}

//for inserting elelement into new vector - duplicate values
vector <int> unionVec(vector <int> v1,vector <int> v2){
    vector <int> uni;
    for (int i=0; i<v1.size();i++){
        uni.push_back(v1[i]);
    }
    for (int i=0; i<v2.size();i++){
        uni.push_back(v2[i]);
    }
    return uni;
}

vector <int> intersectonVec(vector <int> v1,vector <int> v2){
    vector <int> ist;
    for (int i=0; i<v1.size();i++){
        for (int j=0; j<v2.size();j++){
            if(v1[i]==v2[j]){
                //mark check element
                // v2[i]=-1;
                ist.push_back(v1[i]);
                break;
            }
    }
    }
    
    return ist;
}

int main(){
    int n,m;
    vector <int> a,b,c,d;

    cout<<"enter no. of elements in a: ";
    cin>>n;
    cout<<"enter elements of 1st vector: "<<endl;
    a = createVector(n);
    
    cout<<"enter no. of elements in b: ";
    cin>>m;
    cout<<"enter elements of 2nd vector: "<<endl;
    b = createVector(m);

    c = unionVec(a,b);
    cout<<"Vector after Union of both vectors: ";
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    d = intersectonVec(a,b);
    cout<<"Vector after Intersection of both vectors: ";
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
}