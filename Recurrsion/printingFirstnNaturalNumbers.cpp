#include<iostream>
using namespace std;
 
void print(int num)
{
    if(num==0)   //Base case
    {
        return;
    }
    cout<<num<<" ";
    print(num-1);
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    print(num);
   return 0;
}
