#include<iostream>
using namespace std;
 
int* movingZerosToTheEnd(int arr[],int x)
{
   for(int i=0;i<x;i++)
   {
     if(arr[i]==0)
     {
        for(int j=i;j<x;j++)
        {
            if(arr[j]!=0)
            {
                swap(arr[i],arr[j]);
                break;
            }
        }
     }
   }
   return arr;
}

int main()
{
    int arr[]={10,0,20,0,40,0,50},x=7;
    int *arr2=movingZerosToTheEnd(arr,x);
    cout<<"The array elements after moving zeros to the end : ";
    for(int i=0;i<x;i++)
   {
    cout<<arr2[i]<<" ";
   }
   return 0;
}