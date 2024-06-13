#include <iostream>

using namespace std;

// full pyramid
/*
    *
   * *
  * * *
 * * * *
* * * * *

*/
int main()
{
    int num =0;
    cout<<"enter no of rows \n";
    cin>>num;
    for (int row=0; row<num; row++)
    {
        for (int col=0; col<num; col++)
        {
            if (row+col<num)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

/*
inverted pyramid
* * * * *
 * * * *
  * * *
   * *
    *
*/
    int num=0;
    cout<<"enter the value of num :\n";
    cin>>num;
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if (col<row)
            cout<<" ";
            else
            cout<<"* ";
        }
        cout<<"\n";
    }

//full pyramid
/*
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
    int num =0;
    cout<<"enter miidle row \n";
    cin>>num;
    for (int row=0; row<num; row++)
    {
        for (int col=0; col<num; col++)
        {
            if (row+col<num)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if (col<row)
            cout<<" ";
            else
            cout<<"* ";
        }
        cout<<"\n";
    }
// holow full pyramid
/*
     * 
    * * 
   *   * 
  *     * 
 *       * 
*         * 
*         * 
 *       * 
  *     * 
   *   * 
    * * 
     * 
*/

 int num=0;
    cout<<"enter the value of middle row;\n";
    cin>>num;

    for(int row= 0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if(row+col==num-1|| col==num-1)
            {
                cout<<"* ";
            }
            else if(row+col<num-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    for(int row= 0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if(row==col || col==num-1)
            {
                cout<<"* ";
            }
            else if(col<row)
            {
                cout<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

// flipped solid diamomd
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
    int num=0;
    cout<<"enter the value of middle row;\n";
    cin>>num;

    for(int row=0; row<num*2; row++)
    {
        if (row<num)
        {
            for(int col=0; col<num-row; col++)
            {
                cout<<"*";
            }
            for(int col=0; col<2*row; col++)
            {
                cout<<" ";
            }
            for(int col=0; col<num-row; col++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int col=0; col<=row-num;col++)
            {
                cout<<"*";
            }
            for(int col=0; col<2*((2*num)-(row+1)); col++)
            {
                cout<<" ";
            }
            for(int col=0; col<=row-num;col++)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }

}



