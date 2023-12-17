#include <iostream>

using namespace std ;

int main()
{
    int num=0;
    cout<<"enter the value row;\n";
    cin>>num;
    cout<<endl;
    
    for(int row=0; row<num; row++)
    {
        int N=65;
        for(int col=0; col<=row; col++)
        {
            cout<<char(N);
            N+=1;
        }
        N-=2;
        for(int col=0; col<row; col++)
        {
            cout<<char(N);
            N-=1;
        }
        cout<<endl;
    }
}
