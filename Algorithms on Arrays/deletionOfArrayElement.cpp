/*
Deletion of array element based on position;
*/

#include<iostream>
using namespace std;
 
int * deletion(int arr[],int x,int pos)
{
   for(int i=pos-1;i<=x;i++)
   {
    arr[i]=arr[i+1];
   }
   x--;
   return arr;
} 

int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int pos;
    cout<<"From which position you want to delete an element : ";
    cin>>pos;
    int *arr2=deletion(arr,x,pos);
    cout<<"Array element after deletion ";
    for(int i=0;i<x-1;i++)
   {
    cout<<arr2[i]<<" ";
   }
   return 0;
}