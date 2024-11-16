#include <iostream>
#include<stack>
using namespace std;

int main() 
{
   stack<string> names;
   names.push("vedant");
   names.push("suraj");
   names.push("vinod");
   
//  Accessing stack items
  
   cout<<names.top()<<endl;
   names.pop();
   cout<<names.top()<<endl;
   names.pop();
   cout<<names.top()<<endl;
   
//   Printing the size of stack

  cout<<"Stack size :"<<names.size();
  
//  Check for an empty stack

  cout<<"\nEmpty or not :"<<names.empty();
  
}