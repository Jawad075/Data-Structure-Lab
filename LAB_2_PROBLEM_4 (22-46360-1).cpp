#include<iostream>
using namespace std;

int main() {

    int n, y, count=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;

    int x[n] ;

    cout<<"input elements of array : ";

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<"enter the number you want to search : ";
    cin>>y;

    for(int i=0;i<n;i++)
    {
        if(x[i]==y)
        {
          count++;
          continue;
        }
    }

    cout<<endl;
    cout<<"the selected number { "<<y<<" }was found "<<count<<" times"<<endl;
}
