#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,n,element,low,high,mid;
    cout<<"input Array size : ";
    cin>>n;
    int arr[n];
    cout<<"input elements of the Array : ";

    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        }


 for(i=0; i<n-1; i++)
        {
        for(j=0; j<n-i-1; j++)
            if (arr[j] >arr[j+1])
            swap(arr[j],arr[j+1]);
        }

    cout<<"The sorted Array : ";          // bubble sort
    for(i=0; i<n; i++)
        {
          cout<<arr[i]<<" ";;
        }

        cout<<endl;
        cout<<endl;


    cout<<"Enter the value for search: ";
    cin>>element;

    low=0;
    high=n-1;


 while(low<=high)
 {
   mid=(low+high)/2 ;
    if(arr[mid]==element)
    {
        cout<<"Element is found."<<endl;
        cout<<"Element position at Index : "<<mid<<endl;
        break;
    }

   else if(arr[mid]>element)
    {
        high=mid-1;
        continue;
    }
    else if(arr[mid]<element)
    {
        low=mid+1;
        continue;
    }
}

    if(low>high)
    {
         cout<<"Element is not found";
    }

    return 0;
}

