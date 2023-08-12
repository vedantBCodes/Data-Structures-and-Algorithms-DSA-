#include<iostream>
using namespace std;
 
void divisorsOfNumbersInPairs(int num)
{
   for(int i=1;i<=sqrt(num);i++)
   {
    if(num%i==0)
    {
        int x=num/i;
        cout<<"["<<i<<","<<x<<"]"<<endl;
    }
   }
}

int main()
{
   int num;
   cout<<"Enter a number:";
   cin>>num;
   divisorsOfNumbersInPairs(num);
   return 0;
}