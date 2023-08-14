/*
Transversal of array means accessing each array element so that the data can be checked
*/

#include<iostream>
using namespace std;
 
void transversalOfArray(int arr[],int x)
{
   for(int i=0;i<x;i++)
   {
    cout<<arr[i]<<" ";
   }
}

int main()
{
    int arr[]={1,2,3,4,5},x=5;
    transversalOfArray(arr,x);
   return 0;
}