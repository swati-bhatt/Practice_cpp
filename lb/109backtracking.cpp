 #include <iostream>
 #include <vector>
 using namespace std;

//recursion
void printPermutation(string str, int i){
    if(str.length()<=i){
        cout<<str<<' ';
        return;
    }
    for(int j=i; j<str.length();j++){
        swap(str[i], str[j]);
        printPermutation(str,i+1);
    }   
}
//backtracking 
void printPermutation2(string & str, int i){
    if(str.length()<=i){
        cout<<str<<' ';
        return;
    }
    for(int j=i; j<str.length();j++){
        swap(str[i], str[j]);
        printPermutation(str,i+1);
        swap(str[i],str[j]);
    }   
}

//will not print all the cases as we need n-1 loops for n length string
// void printPermutation3(string str, int i){
//     vector <string> permutaions;

//     for(int i=0; i<str.length(); i++){
//         for(int j=i; j<str.length();j++){
//             swap(str[i], str[j]);
//             permutaions.push_back(str);
//     } 
//     }
//     for(auto i: permutaions){
//         cout<<i<<" ";
//     }
      
// }
 
 int main(){
    string s="pqrs";
    printPermutation(s,0);
    cout<<endl;
    printPermutation2(s,0);
    cout<<endl;
//    printPermutation3(s,0);
//    cout<<endl;
   return 0;
 }