#include<iostream>
using namespace std;

int NoOfSubarrays1(int Asize) //Using formula
{
   
   int count=(Asize*(Asize+1))/2;
   return count;
}

int NoOfSubarrays2(int Asize) //without using formula
{
   int count=0;
   for(int i=0;i<Asize;i++)
   {
    for(int j=i;j<Asize;j++)
    {
       count++;
    }
   }
   return count;
}

int main()
{
    int Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    int cnt1=NoOfSubarrays1(Asize);
    int cnt2=NoOfSubarrays2(Asize);
    cout<<"The maximum number of subarrays in an array "<<cnt1<<endl;
    cout<<"The maximum number of subarrays in an array "<<cnt2;
    return 0;
}