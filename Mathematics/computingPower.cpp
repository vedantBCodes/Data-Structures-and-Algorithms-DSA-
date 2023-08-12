#include<iostream>
using namespace std;
 
int computingPower(int num,int pow)
{
    int result=1;
    for(int i=1;i<=pow;i++)
    {
        result=result*num;
    }
    return result;
}

int main()
{
    int num,pow;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Enter a power:";
    cin>>pow;
    int result=computingPower(num,pow);
    cout<<result;
   return 0;
}