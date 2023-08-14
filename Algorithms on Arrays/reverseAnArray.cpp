#include<iostream>
using namespace std;
 
int * reverse(int arr[],int x)
{
   for(int i=0;i<x/2;i++)
   {
    int temp=arr[i];
    arr[i]=arr[x-1-i];
    arr[x-1-i]=temp;
   }
   return arr;
} 

int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int *arr2=reverse(arr,x);
    cout<<"Array after reversing all elements : ";
    for(int i=0;i<x;i++)
   {
    cout<<arr2[i]<<" ";
   }
   return 0;
}