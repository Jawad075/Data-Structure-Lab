#include<iostream>
using namespace std;

int main()
{
  int i=2, value;
  string x;

  cout<<"input a string : ";
  getline(cin,x);

  cout<<"input a value: ";
  cin>>value;

  for(i;i<x.length();i=i+3)
    {
     if(int(x[i])!=32)
     {
      x[i]=char(int(x[i])+value);
      }
    }

    cout<<endl;
    cout<<"converted string is: ";

    for(int i=0;i<x.length();i++)
    {
     cout<<x[i];
    }

    cout<<endl;
}

