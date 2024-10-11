#include <iostream>
using namespace std;

int power(int num,int pwr)
{
    if(pwr==0)
    {
        return 1;
    }
    else
    {
        return num * power(num,pwr-1);
    }
}

int main() 
{
    int num=2;
    int pwr=5;
    cout<<power(num,pwr);
}