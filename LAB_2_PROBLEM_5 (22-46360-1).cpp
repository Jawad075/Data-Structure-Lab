#include<iostream>
using namespace std;
int main()

{
   int n, temporary=-1;

    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<endl;

   int a[n];
   int b[n];

    cout<<"input elements : "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"inserted elements are: ";
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[j]=temporary;
            }
        }

        cout<<a[i]<<" ";

        if(b[i]!=temporary)
        {
            b[i]=count;
        }
    }

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(b[i]!=temporary)
        {
              cout<<a[i]<<" "<<"has occured total "<<"= "<<b[i]<<" times"<<endl;
        }
    }
}
