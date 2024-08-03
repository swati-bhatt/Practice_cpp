#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int size=s.size();

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(s[i]==s[j]){
                count++;
                break;
            }
        }
    }
    int disChar=size-count;

    if((disChar&1)==1){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }



  return 0;
}