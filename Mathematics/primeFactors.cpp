#include<iostream>
using namespace std;

bool isPrime(int num)
{
    bool check=true;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            check=false;
        }
    }
    return check;
}
void primeFactors(int num)
{
    for(int i=2;i<=num;i++)
    {
       if(isPrime(i))
       {
        while(num%i==0)
        {
          cout<<i<<" ";
          num=num/i; 
        }
       }
    }
} 
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    primeFactors(num);
   return 0;
}