#include <iostream>
using namespace std;

class Fruit{
    public:
    Fruit(){
        cout<<"In Fruit Class"<<endl;
    }
    void disc(){
        cout<<"I am a fruit"<<endl;
    }
    virtual void  happy(){
        cout<<"I am a happy fruit"<<endl;
    }
};

class Mango: public Fruit{
    public:
    Mango(){
        cout<<"In Mango Class"<<endl;
    }
    void disc(){
        cout<<"I am a Mango"<<endl;
    }
    virtual void  happy(){
        cout<<"I am a happy mango"<<endl;
    }
};

class Langda: public Mango{
    public:
    Langda(){
        cout<<"In Langda Class"<<endl;
    }
    void disc(){
        cout<<"I am a langda"<<endl;
    }
    virtual void  happy(){
        cout<<"I am a happy langda"<<endl;
    }
};

int main(){
// all the parent class constructors of RHS

    //same pointer same object 
    Langda * l=new Langda();
    cout<<endl;
    Mango * m= new Mango();
    cout<<endl;
    Fruit * f= new Fruit();
    cout<<endl;

    // parent pointer child object
    // UPCASTING commomly used
    Fruit* la1= new Langda();
    cout<<endl;
    Mango* la2= new Langda();
    cout<<endl;
    Fruit* ma1 =new Mango();
    cout<<endl;

    //DOWNCASTING rarely used
    //child pointer parent object 
    //explicitly called

    Langda * fr1= (Langda*) new Fruit();
    cout<<endl;
    Langda * ma2= (Langda*) new Mango();
    cout<<endl;
    Mango * fr2= (Langda*) new Fruit();
    cout<<endl;

//function of that on LHS
    l->disc();
    m->disc();
    f->disc();
    la1->disc();
    la2->disc();
    ma1->disc();
    fr1->disc();
    ma2->disc();
    fr2->disc();
    cout<<endl;

//function of that on RHS virtual
    l->happy();
    m->happy();
    f->happy();
    la1->happy();
    la2->happy();
    ma1->happy();
    fr1->happy();
    ma2->happy();
    fr2->happy();
  
  return 0;
}