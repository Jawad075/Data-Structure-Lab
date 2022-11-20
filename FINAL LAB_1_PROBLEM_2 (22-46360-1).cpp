#include<iostream>
using namespace std;

class Queue{

  int front=-1,rear=-1;
  int queue[4];
  public:

    bool isEmpty()              //empty check
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    bool isFull()               //check if full
    {
        if((rear+1)%4 == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


     void enqueue(int element)
    {
        if(isFull()==true)
        {
            cout<<"Unable to enqueue, queue is full"<<endl;
        }
        else if(isEmpty()==true)
        {
            front=0;
            rear=0;
            queue[rear]=element;
        }
        else
        {
            rear=((rear+1)%4);
            queue[rear]=element;
        }
    }

    void dequeue()
    {
        if(isEmpty()==true)
        {
            cout<<"Can't dequeue, empty queue "<<endl;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=((front+1)%4);
        }
    }


    void show()
    {
        if(isEmpty()==true)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else if(front<=rear)
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<queue[i]<<" ";
            }
        }
        else
        {
            for(int i=front;i<4;i++)
            {
                cout<<queue[i]<<" ";
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<queue[i]<<" ";
            }
        }
    }


};
  int main()
  {
    Queue Q;

    Q.enqueue(11);
    Q.enqueue(12);
    Q.enqueue(13);
    Q.enqueue(14);
    Q.enqueue(15);
    cout<<endl;

    Q.show();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    cout<<endl;

     Q.show();
     Q.enqueue(18);
     Q.dequeue();
     cout<<endl;

     Q.show();
     Q.dequeue();

}
