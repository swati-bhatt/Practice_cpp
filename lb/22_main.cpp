#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    cout<<"value is: "<<argc<<endl;
    for (int i = 0; i < argc; ++i) { 
            cout << "argv[" << i << "]: " << argv[i] 
                 << endl; 
        } 
  
    return 0;
} 

//type 
// ./22_main hello Swati Bhatt 