#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter amount of numbers to input in Array : ";
  cin>>n;
  cout<<endl;

  int arr[n];
  cout<<"input the numbers : ";

  for (int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  cout<<endl;

  cout<<"normal orders are = ";
   for (int i=0;i<n;i++)

  {
      cout<<arr[i]<<" ";
  }

  cout<<endl;

  cout<<"reversed orders are = ";
   for (int i=n-1;i>=0;i--)

  {
      cout <<arr[i]<<" ";
  }
    cout<<endl;
}
