#include <iostream>
#include <vector>
using namespace std;

class Demo{

    //data members by default private
    char gender;

    public:
    int age;
    string name;

    //member functions
    void sleep(){
        cout<<"user is sleeping"<<endl;
    }

    void ageNew(){
        cout<<"age of user after 5 years will be "<<age +5<<endl;
    }
    
    //getter setter methods
    void setGender(){
        cout<<"enter your gender: ";
        cin>>gender;
    }
    void getGender(){
        cout<<"gender is:"<<gender<<endl;
    }

    

};

int main(){

  //static memory allocation
  Demo Swati;
  Swati.name="Swatu";
  Swati.age=15;
  cout<<"Swati's age is: "<<Swati.age<<endl;
  cout<<"Swati's Nickname is: "<<Swati.name<<endl;

  Swati.setGender();
  Swati.getGender();
  Swati.ageNew();
  Swati.sleep();
  cout<<endl<<endl;
   // error: 'gender' is a private member of 'Demo'
  //cout<<Swati.gender;

    //Dynamic memory allocation
    Demo * Kanishka =new Demo;
    //method 1
    (*Kanishka).name="kannu";
    //Method 2
    Kanishka->age=15;
    cout<<"Kanishka's age is: "<<(*Kanishka).age<<endl;
    cout<<"Kanishka's Nickname is: "<<Kanishka->name<<endl;

    Kanishka->setGender();
    Kanishka->getGender();
    (*Kanishka).ageNew();
    (*Kanishka).sleep();
  return 0;
}