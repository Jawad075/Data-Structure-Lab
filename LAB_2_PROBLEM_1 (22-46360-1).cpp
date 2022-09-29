#include<iostream>
using namespace std;

int main ()
{
    int n,y;
    cout<<"define the size of first array :";
    cin>>n;
    cout<<"define the size of second array :";
    cin>>y;

    int a[n];
    int b[y];
    int merg[n+y];
    cout<<endl;

    cout<<"enter elements of first array : ";
    for (int i=0;i<n;i++)
     {
        cin>>a[i];
     }
    cout<<"enter second array elements :";

     for (int i=0;i<y;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        merg[i]=a[n-(i+1)];
    }

 int k=y-1;

     for (int i=n;i<n+y;i++)
   {
      merg[i]=b[k];
      k--;
   }

   cout<<endl;
   cout<<"reversed merged array outputs are : ";
    for(int i=0; i<n+y;i++)
    {
     cout<<merg[i]<<" " ;
    }

    cout<<endl;
}
