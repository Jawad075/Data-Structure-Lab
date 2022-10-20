#include<iostream>
using namespace std;

int main()

{
    int n,i,num,index;
    cout<<"input Array size : ";
    cin>>n;

    int arr[n];
    cout<<"input numbers in the Array: ";

    for(i=0; i<n; i++)
        {
          cin>>arr[i];
        }

    cout<<"input a number to Search in the array: ";
    cin>>num;

    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }


    if(arr[i]!=num)
         {
        cout<<"number not available"<<endl;
        }
    else
         {
        cout<<" the number found at Index--> "<<index;
        }

    cout<<endl;
    return 0;
}
