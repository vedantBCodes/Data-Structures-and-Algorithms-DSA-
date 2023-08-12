#include<iostream>
using namespace std;

int GCDOfTwoNumbers1(int num1,int num2)  //Solution 1
{
    int max=0;
   for(int i=1;i<=num1;i++)
   {
    if(num1%i==0 && num2%i==0)
    {
        if(i>max)
        {
            max=i;
        }
    }
   }
   return max;
}
int GCDOfTwoNumbers2(int num1,int num2)  //Solution 2
{
   int i;
   for(i=num1;i>=1;i--)
   {
    if(num1%i==0 && num2%i==0)
    {
        break;
    }
   }
   return i;
}
int GCDOfTwoNumbers3(int num1,int num2)  //Solution 3
{
   int num=min(num1,num2);
   while(num>0)
   {
    if(num1%num==0 && num2%num==0)
    {
        break;
    }
    num--;
   }
   return num;
} 

int main()
{
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    int gcd1=GCDOfTwoNumbers1(num1,num2);
    int gcd2=GCDOfTwoNumbers2(num1,num2);
    int gcd3=GCDOfTwoNumbers3(num1,num2);
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd1<<endl;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd2<<endl;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd3;
   return 0;
}