#include<iostream>
using namespace std;
 
int removeDuplicatesFromASortedArray(int arr[],int x)
{
    int cnt=0;
   for(int i=1;i<x;i++)
   {
    if(arr[i]==arr[i-1])
    {
        cnt++;
    }
   }
   return cnt;
}

int main()
{
    int arr[]={10,10,20,30,40,40,50},x=7;
    int cnt=removeDuplicatesFromASortedArray(arr,x);
    cout<<"The number of duplicates in a given sorted array is : "<<cnt;
   return 0;
}