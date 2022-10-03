#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cout<<"enter size of 1st array: ";
    cin>>n;
    int a[n];

    cout<<"enter size of 2nd array: ";
    cin>>x;
    int b[x];
    cout<<endl;

    cout<<"enter first array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"enter second array elements : ";
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    int i,j;
     bool temp=false;

    cout<<endl;
    cout<<"the uncommon elements are : "<<endl;
    for( i=0;i<n;i++)
    {
        for( j=0;j<x;j++)
        {
            if(a[i]==b[j])
            {
                temp=true;
                break;
            }
            else if(a[i]!=b[j])
            {
                temp=false;
                continue;
            }
        }

       if(temp==false)
        {
            cout<<a[i]<<" ";
        }
      }

    for( i=0;i<x;i++)
    {
    for( j=0;j<n;j++)
    {
        if(b[i]==a[j])
        {
            temp=true;
            break;
        }
        else if(b[i]!=a[j])
        {
            temp=false;
            continue;
        }
    }
    if(temp==false)
    {
        cout<<b[i]<<" ";
    }
   }
   cout<<endl;
}
