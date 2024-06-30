#include <iostream>
using namespace std;

int add(int a, int b, int c){
    return a+b+c;
}

int max(int a, int b, int c){
    if(a>=b){
        if(a>=c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>=c){
            return b;
        }
        else{
            return c;
        }
    }
}

void count(int a){
    for(int i=1; i<=a; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

char grade(int marks){
    char grade;
    if (marks<=100 && marks >=0){
        if (marks>=80){
            grade = 'A';
        }
        else if(marks>=60){
            grade = 'B';
        }
        else if(marks>=60){
            grade = 'C';
        }
        else if(marks>=40){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
    }
    else{
        grade = 'I';
    }
    return grade;
    
}

int main(){
  int a;
  int b;
  int c;
  cout<<"enter numbers:"<<endl;
  cin>>a>>b>>c;
  cout<<"sum is: "<<add(a,b,c)<<endl;
  cout<<"max is: "<<max(a,b,c)<<endl;
  count(c);

  int marks;
  cout<<"enter marks: "<<endl;
  cin>>marks;
  cout<<"your Grade is: "<<grade(marks)<<endl;
  return 0;

}