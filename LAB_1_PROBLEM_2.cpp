#include <iostream>
using namespace std;

int main()
{
    int n=4,even[4],odd[4],evencount=0 ,oddcount=0 ,i;

    int arr[4];
    cout<<"Input four numbers in the array "<<endl;

    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    for(i=0;i<4;i++)
    {
        if(arr[i]%2==0)
            even[evencount++]=arr[i];
        else
            odd[oddcount++]=arr[i];
    }

    cout<<"The even numbers are: ";
    for(i=0;i<evencount;i++)
        cout<<even[i]<<" ";

    cout<<endl;

    cout<<"The odd numbers are: ";
    for(i=0;i<oddcount;i++)
        cout<<odd[i]<<" ";

        cout<<endl;
}
