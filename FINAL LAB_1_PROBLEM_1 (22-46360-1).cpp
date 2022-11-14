#include<iostream>
using namespace std;

class Queue{

int queue[7];
int Front=-1, Back=-1;

public:
    bool isEmpty()
    {
        if(Front==-1 && Back==-1 )
      {
       return true;
      }
        else
      {
        return false;
      }
    }

  bool isFull()                     //if full
  {
      if(Back==6)
      {
      return true;
      }

      else
      {
       return false;
      }
  }

  void enqueue(int element)                  //Enqueue
  {
      if(isFull()==true)
          {
          cout<<"Queue Full"<<endl;
           }

      else if(isEmpty()==true)
        {
        Front=0;
        Back=0;
        queue[Back]=element;
         }

      else
        {
          Back++;
          queue[Back]=element;
        }
  }

  void dequeue()                                //dequeue
  {
      if(isEmpty()==true)
      {
          cout<<"Queue Empty, Can't Dequeue"<<endl;
      }

      else if(Front==Back)
      {
          Front=-1;
          Back=-1;
      }
      else
      {
          Front++;
      }
  }

  void display()                        //display
  {
      if(isEmpty()==true)
      {
          cout<<"Queue is empty"<<endl;
      }

       else if (isFull()==true)
          {
             cout<<"Queue is Full"<<endl;
          }

      else
      {
          for(int i=Front;i<=Back;i++)
          {
              cout<<queue[i]<<endl;
          }

      }
  }

};
int main()

{
    Queue q;
    /* */
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(33);
    q.enqueue(44);
    q.enqueue(55);
    q.dequeue();


    q.display();

}

