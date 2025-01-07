/*
PROBLEM NAME : Check for balanced parenthesis  (An application of stack)

The number of opening brackets must be equal to the number of closing brackets . i.e the total no. of brackets must be even .
First opened bracket should close first , second opened bracket should close second last and so on .

I/O :str="({})"
O/P :YES

I/O :str="((())"
O/P :NO

I/O :str="({)}"
O/P :NO

I/O :str="{}({()})"
O/P :YES

I/O :str="(()))"
O/P :NO

*/
#include <iostream>
#include <stack>
using namespace std;

bool matching(char a, char b)
{
    if((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isBalanced(string str1)
{
    stack<char> st;
    for(char ch:str1)
    {
        if(ch=='(' || ch=='[' || ch=='{')
        {
            st.push(ch);
        }
        else
        {
            if(st.empty()==true) //str1 must start with an openeing bracket
            {
                return false ; 
            }
            else if(matching(st.top(),ch)==false)
            {
                return false ;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.empty()==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() 
{
    string str1="{}({()})";
    if(isBalanced(str1)==true)
    {
        cout<<"Yess";
    }
    else
    {
        cout<<"Noo";
    }
}