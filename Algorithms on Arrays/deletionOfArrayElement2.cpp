/*
Deletion of array element by taking input of that perticular element
*/

#include<iostream>
using namespace std;
 
int * deletion(int arr[],int x,int element)
{
   for(int i=0;i<x;i++)
   {
    if(arr[i]==element)
    {
        for(int j=i;j<x;j++)
        {
            arr[j]=arr[j+1];
        }
    }
   }
   x--;
   return arr;
} 

int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int element;
    cout<<"Which array element you want to delete : ";
    cin>>element;
    int *arr2=deletion(arr,x,element);
    cout<<"Array element after deletion ";
    for(int i=0;i<x-1;i++)
   {
    cout<<arr2[i]<<" ";
   }
   return 0;
}