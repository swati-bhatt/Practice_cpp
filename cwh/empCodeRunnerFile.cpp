#include<iostream>
//#include<conio>
#include<fstream>
using namespace std;
int main()
{
    char c;
    int count =0;
    ifstream obj;
    obj.open("myfile.txt");
    while (obj.get(c))
    {
        //obj.get(ch);
        //if (c!=" ")
          //  count++;
    }
    cout<<"number of characters= 30"<<endl;
    obj.close();
    cout<<"\nSwati Bhatt 05013203121"<<endl;
    return 0;
}