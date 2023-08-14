#include<iostream>
using namespace std;
 
bool isSorted(int arr[],int x)
{
    for(int i=0;i<x-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[]={12,21,31,61,93},x=5;
    if(isSorted(arr,x)==true)
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
   return 0;
}