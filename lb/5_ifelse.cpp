#include <iostream>
using namespace std;

int main()
{
    int score=0;
    cout<<"enter score: ";
    cin>>score;
    cout<<"\n";

    if (score>=90)
    {
        cout<<"Grade A";
    }
    else if (score<90 && score>=75)
    {
        cout<<"Grade B";
    }
    else if (score<75 && score>=60)
    {
        cout<<"Grade C";
    }
    else if (score<60 && score>=40)
    {
        cout<<"Grade D";
    }
    else
    {
        cout<<"Grade F";
    }
}