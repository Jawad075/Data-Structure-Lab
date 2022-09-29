#include <iostream>
using namespace std;

void func(int x, int y)

    {
    cout<< "all odd numbers between these values : ";
    for (int i = x; i <= y; i++)
    {
      if(i%2 != 0)
    {
     cout <<i<< " ";
    }
 }
    cout<<endl;
}

int main()
{
    int first, last;
    cout<<"input the starting value: ";
    cin>> first;

    cout<<"input the ending value: ";
    cin>> last;
    cout<<endl;

    func(first,last);       //calling function

    return 0;
}
