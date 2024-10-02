#include<iostream>
using namespace std;
 
void selectionSort(int arr[],int Asize)
{
    for(int i=0;i<Asize-1;i++)
    {
        int midIndex=i;
        for(int j=i+1;j<Asize;j++)
        {
            if(arr[j]<arr[midIndex])
            {
               midIndex=j;
            }
        }
        swap(arr[i],arr[midIndex]);  //swap is an in-built function
    }
}
int main()
{
    int Asize,arr[10];
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter any "<<Asize<<" array:";
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,Asize);
    cout<<"The sorted array:";
    for(int i=0;i<Asize;i++)
    {
       cout<<arra[i]<<" ";
    }
   return 0;
}