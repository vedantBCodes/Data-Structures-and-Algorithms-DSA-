#include<iostream>
#include<stack>    //No need to include stack header file here
using namespace std;

class Stack 
{
    //properties
    public:
        int *arr;      //Defining an empty array
        int top;       //Defining a variable top to show index of an array item
        int size;      //Defining a variable size to show the size of array

    // behaviour
    Stack(int size) 
    {            //Parameterized constuctor
        this -> size = size;
        arr = new int[size];     //Creating an array with size=size
        top = -1;                //Initializing top variable with -1
    }

    void push(int element) 
    {
        if(size - top > 1)   //Condition to check if there is space to add a new item
        {
            top++;           ///For 1st element index will be 0
            arr[top] = element;
        }
        else           //if there is no space
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() 
    {
        if(top >=0 )    //Condition to check if there is element in array or not
        {
            top--;
        }
        else           //if there is not element in array
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()          //Function that returns the topmost array element (i.e peek element)
    {
        if(top >=0 )
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() 
    {
        if( top == -1) 
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};


int main() {


    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) 
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty  " << endl;
    }

    return 0;
}