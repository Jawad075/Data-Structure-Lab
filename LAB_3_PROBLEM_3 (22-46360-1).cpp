#include<iostream>
using namespace std;

class Employee{
 public:
    string id;
    int joining_year;
    int salary;
};


int main()
{
  Employee emp[10];

    for(int i=0;i<10;i++)
{
    cout<<"Employee -->> "<<i+1<<" Unique ID: ";
    cin>>emp[i].id;

    cout<<"Joining Year : ";
    cin>>emp[i].joining_year;

    cout<<"Salary : ";
    cin>>emp[i].salary;
    cout<<endl;

}

    cout<<"Employees who Joined before 2009 :"<<endl;


    for(int i=0;i<10;i++)
    {
     if( emp[i].joining_year<2009)
      {
        cout<<"Employee SL. "<<i+1<<" "<<"Unique ID: "<<emp[i].id<<endl;
        cout<<"Employee SL. "<<i+1<<" "<<"Joining Year: "<<emp[i].joining_year<<endl;

        }
}

    cout<<endl;
    cout<<"Employees with 20000+ salary :"<<endl;

    for(int i=0;i<10;i++)
     {
      if( emp[i].salary>20000)
       {
        cout<<"Employee SL."<<i+1<<" "<<"Unique ID: "<<emp[i].id<<endl;
        cout<<"Employee SL."<<i+1<<" "<<"Salary : "<<emp[i].salary<<endl;
        }
      }

}

