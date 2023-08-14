/*
NOTE:Insertion can be performed only if the capacity of the array is more than the number of array elements present.
One can only insert element at starting ,ending or in the middle somewhere.
*/

#include<iostream>
using namespace std;
 
int * insertion(int arr[],int x,int newElement,int pos)
{
   for(int i=x;i>=pos-1;i--)
   {
    arr[i]=arr[i-1];
   }
   arr[pos-1]=newElement;
   return arr;
} 

int main()
{
    int arr[10]={1,2,3,4,5},x=5;
    int element,pos;
    cout<<"Enter an element you want to insert:";
    cin>>element;
    cout<<"At which position you want to insert "<<element<<" : ";
    cin>>pos;
    int *arr2=insertion(arr,x,element,pos);
    cout<<"Array element after insertion ";
    for(int i=0;i<x+1;i++)
   {
    cout<<arr2[i]<<" ";
   }
   return 0;
}