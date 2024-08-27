#include <iostream>
#include <vector>
using namespace std;

int ways(int n){
//ways to reach 1st stair =1 and 2nd stair=2
if(n==1 || n==2){
  return n;
}
return (ways(n-1)+ways(n-2));
}

void print(int arr[], int size, int i){
  if(i>=size){
    return;
  }
  cout<<arr[i]<<" ";
  print(arr,size,i+1); 
}

void printNew(int arr[], int size){
  if(size==0){
    return;
  }
  cout<<arr[0]<<" ";
  printNew(arr+1,size-1);
}

void maxiEle(int arr[], int size, int i, int & maxi, int &mini){
  if(i>=size){
    return;
  }
  if(arr[i]>maxi){
    cout<<"element "<<arr[i]<<" max as of now " <<maxi<<endl;
    maxi=arr[i];
    cout<<"new max "<<maxi<<endl;
  }
  if(arr[i]<mini){
    cout<<"element "<<arr[i]<<" min as of now " <<mini<<endl;
    mini=arr[i];
    cout<<"new min "<<mini<<endl;
  }
  maxiEle(arr,size,i+1,maxi,mini);
}

void maxElement(int arr[], int size, int & maxi, int & mini){

  if(size==0){
    return;
  }
  if(arr[0]>maxi){
    cout<<"element "<<arr[0]<<" max as of now " <<maxi<<endl;
    maxi=arr[0];
    cout<<"new max "<<maxi<<endl;
  }
  if(arr[0]<mini){
    cout<<"element "<<arr[0]<<" min as of now " <<mini<<endl;
    mini=arr[0];
    cout<<"new min "<<mini<<endl;
  }
  maxElement(arr+1,size-1,maxi,mini);
}

void check(string s, char c, int size, int i, bool& f){
  if(s[i]==c){
    // cout<<"found"<<endl;
    f=true;
    return;
  }
  if(i>=size){
    // cout<<"breaking "<<endl;
    return;
  }
  // cout<<"next recusion"<<endl;
  check(s,c,size,i+1,f);
}

bool checkk(string s, char c, int size, int i){
  if(s[i]==c){
    return true;
  }
  if(i>=size){
    return false;
  }
  return checkk(s,c,size,i+1);
}

void found(string s, char c, int size, int i){
  if(i>=size){
    return;
  }
  if(s[i]==c){
    cout<<"found at: "<<i<<endl;
  }
  found(s, c, size, i+1);
}

void printDigits(int n){
  // if(n<10){
  //   cout<<n<<endl;
  //   return;
  // }
  if(n==0){
    return;
  }
  printDigits(n/10);
  cout<<n%10<<endl;
}
int main(){
  // int n;
  // cout<<"Enter no of stairs:";
  // cin>>n;
  // cout<<ways(n)<<endl;

  // int arr[]={10,20,30,40,50};
  // int size= sizeof(arr)/sizeof(int);

  // print(arr,size,0);
  // cout<<endl;

  // printNew(arr,size);
  // cout<<endl;

  // int arrNew[]={50,70,18,25,35,82,1,10,66,16};
  // int sizeNew= sizeof(arrNew)/sizeof(int);
  // int maxi=INT_MIN;
  // int maxi2=INT_MIN;
  // int mini=INT_MAX;
  // int mini2=INT_MAX;
  // maxiEle(arrNew,sizeNew,0,maxi2,mini2);
  // cout<<mini2<<endl;
  // cout<<maxi2<<endl<<endl;
  // maxElement(arrNew,sizeNew,maxi,mini);
  // cout<<mini<<endl;
  // cout<<maxi<<endl;
  
  // string s="swatibhatt";
  // char c= 'z';
  // int len=s.length();
  // if(checkk(s,c,len,0)){
  //   cout<<"found"<<endl;
  // }
  // else{
  //   cout<<"not found"<<endl;
  // }
  // found(s,'t',len,0);
    

  // bool found=false;
  // check(s,c,len,0,found);
  // if(found){
  //   cout<<"found"<<endl;
  // }
  // else{
  //   cout<<"not found"<<endl;
  // }
  int num;
  cout<<"enter number: ";
  cin>>num;
  printDigits(num);

  int numofdigits=log10(num)+1;
  //using for loop
  // vector <int> digits;
  // for(int i=0; i<numofdigits; i++){
  //   if(i==numofdigits-1){
  //     digits.push_back(num);
  //   }
  //   else{
  //     digits.push_back(num%10);
  //     num=num/10;
      
  //   }
  // }
  // for(int i=numofdigits-1; i>=0; i--){
  //   cout<<digits[i]<<endl;
  // }

  return 0;

}