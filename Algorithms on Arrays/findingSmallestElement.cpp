#include<iostream>
using namespace std;
 
int  smallestElement(int arr[],int x)
{
   int min=arr[0];
   for(int i=1;i<x;i++)
   {
    if(arr[i]<min)
    {
      min=arr[i];
    }
   }
   return min;
} 

int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int minElement=smallestElement(arr,x);
    cout<<"The smallest array element is "<<minElement;
    
   return 0;
}