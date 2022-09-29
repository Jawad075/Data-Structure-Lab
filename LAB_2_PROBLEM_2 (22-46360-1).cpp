#include<iostream>
using namespace std;

 int main (){

 int n,x;
 cout<<"enter size of First array : ";
 cin>>n;
 cout<<"enter size of Second array : ";
 cin>>x;
 cout<<endl;

 int a[n];
 int b[x];

 cout<<"input elements of 1st array :";
 for (int i=0;i<n;i++)
{
    cin>>a[i];
}

 cout<<"input elements of 2nd array :";
 for (int i=0;i<x;i++)
{
    cin>>b[i];
}

 cout<<endl;
 cout<<"the Common elements are : ";
for(int i=0; i<n;i++)
{
    for (int j=0;j<x;j++)
    {
        if (a[i]==b[j])
        {
            cout<<a[i]<<" ";
            break;
        }
    }
  }

  cout<<endl;
}
