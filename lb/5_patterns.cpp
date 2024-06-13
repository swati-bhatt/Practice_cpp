#include <iostream>

using namespace std;

// hollow pyramid
// diamond

int main()
{

/*  *****
    *****
    *****
    *****
    *****
*/

    int rowcount= 0;
    int columncount=0;
    cout<<"enter no of rows and columns: \n";
    cin>>rowcount>>columncount;

    for(int row=0; row<rowcount; row++)
    {
        for(int col=0; col<columncount; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

/*  *****
    *   *
    *   *
    *   *
    *****
*/
    int rowcount=0;
    int columncount=0;
    cout<<"enter no of rows and columns: \n";
    cin>>rowcount>>columncount;
    
    for (int row= 0; row<rowcount; row++)
    {
        for(int col=0; col<columncount; col++)
        {
            if (row==0 || col==0 || row==rowcount-1 || col== columncount-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }


/*  *
    **
    ***
    ****
    *****
*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;

    for (int row=0; row<num;row++)
    {
        for (int col=0; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
/*  
        *
       **
      ***
     ****
    *****

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;

    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num;col++)
        {
            if (row+col>=num-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

/*  
    *****
    ****
    ***
    **
    *

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;

    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if (row+col<num)
            {
                cout<<"*";
            }
            else
            {    
                break;
            }
        }
        cout<<"\n";
    }

/*  
    *****
     ****
      ***
       **
        *

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;

    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if (row==col || col>row)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

/*  
    *
    **
    * *
    *  *
    *   *
    ******

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if(col==0 || row==num-1)
            {
                cout<<"*";
            }
            else if (row==col)
            {
                cout<<"*";
                break;
            }
            else
            {
                cout<<" ";
            }
        }
       cout<<endl; 
    }

/*  
    *
   ***
  *****
 *******
*********

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if(col + row == num-1)
            {
                cout<<"*";
            }
            else if (row + col >num-1)
            {
                cout<<"**";
            }
            else
            {
                cout<<" ";
            }
        }
       cout<<endl; 
    }

/*  
*********
 *******
  *****
   ***
    *

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if(col == num-1)
            {
                cout<<"*";
            }
            else if (row <= col )
            {
                cout<<"**";
            }
            //row<col
            else 
            {
                cout<<" ";
            }
        }
       cout<<endl; 
    }    
/*
    *
   * *
  *   *
 *     *
*********

*/

    int num=0;
    cout<<"enter no of rows: ";
    cin>>num;
    for(int row=0; row<num; row++)
    {
        for(int col=0; col<num; col++)
        {
            if (row==0 && col==num-1)
            {
                cout<<"*";
            }
            
            else if(col + row == num-1 && row!=0)
            {
                cout<<"*";
                
                for(int mid = 0; mid < (2*row)-1; mid++)
                {
                    if (row == num-1)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                    
                }
                cout<<"*";
            }

            //row<col
            else 
            {
                cout<<" ";
            }
        }
       cout<<endl; 
    }
/*  
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

    int num=0;
    cout<<"enter mid row i.e row across which elemnts are identical : \n";
    cin>>num;
    for(int row=0; row<(num*2)-1; row++)
    {   
        if (row<num)
        {
            for (int ele= 0; ele<(num-row)-1; ele++)
            {
                        cout<<" ";
            }

            for (int ele = 0; ele<(2*row)+1; ele++)
            {
                    cout<<"*";
            }    
        }

        else
        {
            for(int ele=0; ele<(row-num)+1; ele++)
            {
                cout<<" ";
            }
            for(int ele=0; ele<((2*num-(row+1))*2-1); ele++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

/*  
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/

    int num=0;
    cout<<"enter mid row i.e row across which elemnts are identical : \n";
    cin>>num;

    for(int row=0; row<2*num-1; row++)
    {
        if (row<num)
        {
            for(int col=0; col<num-row-1; col++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int col=0; col<2*row-1; col++)
            {
                cout<<" ";
            }
            if (row!=0)
            {
                cout<<"*";
            }
        }

        else
        {
             for(int col=0; col<row-num+1; col++)
            {
                cout<<" ";
            }
            cout<<"*";
            for (int col=0; col<(2*num-row)*2-5; col++)
            {
                cout<<" ";
            }
            if (row!=(2*num-2))
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }


/* 

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/

    int num=0;
    cout<<"enter mid row i.e row across which elemnts are identical : \n";
    cin>>num;

    for(int row=0; row<2*num-1; row++)
    {
        if (row<num)
        {
            for(int col=0; col<row; col++)
            {
                cout<<" ";
            }
            for(int col=0; col<2*(num-row)-1 ; col++)
            {
                cout<<"*";
            }
        }

        else
        {
            for(int col=0; col<2*num-row-2; col++)
            {
                cout<<" ";
            }
            for(int col=0; col<2*(row-num)+3; col++)
            {
                cout<<"*";
            }
            
        }
        cout<<"\n";
    } 

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