#include <iostream>

using namespace std;

class solution{
public:
bool find(int arr[],int size, int key){
    bool result;
    for(int i=0; i<size; i++){
        if (arr[i]==key){
            return true;
        }
    }
    return false;
}
};

int main(){
   int  mylist[]={1,2 ,3,4,5,6};
   int key;
   cout<<"Enter element you want to find:";
   cin>>key;
   int size= sizeof(mylist)/sizeof(int);

//sizeof() returns size in bytes
   solution result;
   if(result.find(mylist, size, key)){
    cout<<"Element Found"<<endl;
   }
   else{
    cout<<"Element NOT Found"<<endl;
   }

}