#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char name[100];
    cout<<"enter name: ";
    // cin>>name; 
    cin.getline(name,100);

    int i=0;
    for(i=0; i<sizeof(name) && name[i]!='\0'; i++){
        cout<<i<<" "<<name[i]<<endl;
    }

    int j=0;
    while(name[j]!='\0'){
        j++;
    }

   
    cout<<"length: "<<i<<endl;
    cout<<"length: "<<j<<endl;

    cout<<"length: " <<strlen(name)<<endl;
    //sizeof(name)=100

    //replace all spaces with @
    for(i=0; i<sizeof(name) && name[i]!='\0'; i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
    for(i=0; i<sizeof(name) && name[i]!='\0'; i++){
        cout<<name[i];
    }
     cout<<endl;
  
    //check for palindrome
    int flag=1;
    for(int s=0,e=j-1; e>s; e--, s++){
        if(name[s]!=name[e]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"Not a palindrome "<<endl;
    }
    else{
        cout<<"It is a palindrome "<<endl;
    }

    //to uppercase
    for(int i=0; i<strlen(name); i++){
        // if(name[i]>=97 && name[i]<=123){
        //     // name[i]=name[i]-32;
        // }
         if(name[i]>='a' && name[i]<='z'){
            name[i]=name[i]+'A'-'a';
        }
    }
    for(i=0; i<sizeof(name) && name[i]!='\0'; i++){
        cout<<name[i];
    }
    cout<<endl;

    //reverse
    for(int s=0,e=j-1; e>s; e--, s++){
        char temp=name[e];
        name[e]=name[s];
        name[s]=temp;
    }
    for(i=0; i<sizeof(name) && name[i]!='\0'; i++){
        cout<<name[i];
    }
    cout<<endl;


  return 0;
}