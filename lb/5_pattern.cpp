#include <iostream>
using namespace std;

int main()
{
/* 

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/

    int num=0;
    cout<<"enter row with max no of *'s : \n";
    cin>>num;

    for(int row=0; row<2*num-1; row++)
    {
        if (row<num)
        {
            for(int col=0; col<row+1; col++)
            {
                cout<<"*";
            }
        }

        else
        {
            for(int col=0; col<2*num-row-1; col++)
            {
                cout<<"*";
            }
            
        }
        cout<<"\n";
    }        
}    