#include<iostream>
using namespace std;

//This program is not applicable for a number whose factorial is not in the range of long int datatype

long int factorial(long int num)
{
   long int fact=1;
   for(int i=1;i<=num;i++)
   {
    fact=fact*i;
   }
   return fact;
}

int trailingZerosInFactorial(int num)
{
   int cnt=0;
   long int factorialOfNum=factorial(num);
   while(factorialOfNum%10==0)
   {
    cnt++;
    factorialOfNum=factorialOfNum/10;
   }
   return cnt;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The number of trailing zeros in "<<num<<" is:"<<trailingZerosInFactorial(num);
    return 0;
}