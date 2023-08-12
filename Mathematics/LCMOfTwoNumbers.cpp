#include<iostream>
using namespace std;

int LCMCalculation(int num1,int num2)
{
   int num=max(num1,num2);
   int temp=num;
   bool check=false;
   while(check==false)
   {
    if(num%num1==0 && num%num2==0)
    {
        check=true;
        break;
    }
    num+=temp;
   }
   if(check==true)
   {
    return num; 
   }
   else
   {
    return num1*num2;
   }
  
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