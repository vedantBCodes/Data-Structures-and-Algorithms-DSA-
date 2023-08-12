#include<iostream>
using namespace std;

int LCMCalculation(int num1,int num2)
{
   int num=max(num1,num2);
   while(true) //This means repeat this block until it explicitly quit
   {
    if(num%num1==0 && num%num2==0)
    {
        break;
    }
    num++;
   }
    return num;
} 

int main()
{
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    int lcm=LCMCalculation(num1,num2);
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm<<endl;
   return 0;
}