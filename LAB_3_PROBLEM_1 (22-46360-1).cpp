#include <iostream>
using namespace std;

int main()
{
   int a[5][5], tr[5][5];
   int row, column, i, j;


   cout << "Enter row number : ";
   cin >> row;
   cout<<endl;
   cout << "Enter column number : ";
   cin>> column;
   cout<<endl;

   cout << "input elements of the matrix -----> " << endl;

   for (int i = 0; i < row; ++i)
    {
      for (int j = 0; j < column; ++j)
       {
        cout << "Enter element a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
       }
    }
   cout<<endl;


   cout<<"inserted matrix is:"<<endl;
   for(i=0; i<row ; ++i)
    {
      for(j=0; j<column ; ++j)
      cout<<a[i][j]<<" ";
      cout<<endl;
    }
   cout<<endl;


   for(i=0; i<row; ++i)
    {
     for(j=0; j<column ; ++j)
        {
         tr[j][i] = a[i][j];
        }
     }


   cout<<"transpose matrix is : "<<endl;

   for(i=0; i<column ; ++i)
    {
      for(j=0; j<row; ++j)
         cout<<tr[i][j]<<" ";
         cout<<endl;
    }

}
