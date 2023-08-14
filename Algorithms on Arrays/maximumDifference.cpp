
// Maximum value of arr[j]-arr[i] such that j>i

#include<iostream>
using namespace std;
 
int maximumDifference(int arr[],int x)
{
    int diff,maxDiff=0;
   for(int i=0;i<x;i++)
   {
    for(int j=i+1;j<x;j++)
    {
        if(arr[j]>arr[i])
        {
            diff=arr[j]-arr[i];
        }
        maxDiff=max(diff,maxDiff);
    }
   }
   return maxDiff;
}

int main()
{
    int arr[]={7,10,4,10,6,3,10},x=7;
    int maxDiff=maximumDifference(arr,x);
    cout<<"The maximum difference is "<<maxDiff;
   return 0;
}