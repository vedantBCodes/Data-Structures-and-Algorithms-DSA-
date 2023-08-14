/*
An element of array is leader if it is greater than or equal to all the elements to its right side.
The rightmost element is always a leader.
*/
#include<iostream>
using namespace std;

void leadersInAnArray(int arr[],int x)
{
    bool check=true;
    cout<<"Leaders in a given array are:";
   for(int i=0;i<x;i++)
   {
    check=true;
    for(int j=i+1;j<x;j++)
    {
        if(arr[i]<=arr[j])
        {
            check=false;
            break;
        }
    }
    if(check==true)
    {
        cout<<arr[i]<<" ";
    }
   }
} 

int main()
{
    int arr[]={7,10,4,10,6,5,3},x=7;
    leadersInAnArray(arr,x);
   return 0;
}