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
int  secondLargestElement(int arr[],int x)
{
   int secondMax=arr[0];
   int max=largestElement(arr,x);
   for(int i=1;i<x;i++)
   {
    if(arr[i]!=max && arr[i]>secondMax)
    {
      secondMax=arr[i];
    }
   }
   return secondMax;
} 


int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int secondMaxElement=secondLargestElement(arr,x);
    cout<<"The 2nd largest array element is "<<secondMaxElement;
    
   return 0;
}