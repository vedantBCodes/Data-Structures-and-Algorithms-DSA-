#include<iostream>
using namespace std;
 
int  largestElement(int arr[],int x)
{
   int max=arr[0];
   for(int i=1;i<x;i++)
   {
    if(arr[i]>max)
    {
      max=arr[i];
    }
   }
   return max;
} 

int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int maxElement=largestElement(arr,x);
    cout<<"The largest array element is "<<maxElement;
    
   return 0;
}