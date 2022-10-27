#include<iostream>
using namespace std;
class Mystack{
int Stack[10];
int top=0;
public:
    bool isEmpty(){

    if(top==0)
    {
        return true;
    }
    else{
        return false;
    }
    }

    bool isFull()
    {
        if(top==10)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool push(int element)
    {
        if(isFull()==true)
        {
            cout<<"Can not push the element"<<endl;
            return false;
        }
        else
        {
            Stack[top]=element;
            top++;
            return true;
        }
    }

    bool pop()
    {
        if(isEmpty()==true)
        {
            cout<<"Can not pop this element"<<endl;
            return false;
        }
        else
        {
            top--;
            return true;
        }
    }
    int showTop()
    {
        if(isEmpty()==true)
        {
            return -9999999;
        }
        else
        {
            return Stack[top-1];
        }
    }
    void display()
    {
        if(isEmpty()==true)
        {
            cout<<"Can not print "<<endl;

        }
        else
        {
            for(int i=top-1;i>=0;i--)
            {
                cout<<Stack[i]<<" ";
            }
        }
    }

};
int main()
{
    Mystack st;
    st.push(2);
    st.push(100);
    st.push(9);
    st.push(22);

    st.display();
}
