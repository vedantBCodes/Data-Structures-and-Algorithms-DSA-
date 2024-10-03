#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// First approach

void bubbleSort1(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// Second approach

void bubbleSort2(int arr[],int Asize)
{
    int counter=1;
    while(counter<Asize)
    {
        for(int i=0;i<Asize-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }
}

int main()
{
    int arr[]={4,2,5,3,1},n=5;
    bubbleSort1(arr,n);
    printArray(arr,n);
    cout<<endl;
    bubbleSort2(arr,n);
    printArray(arr,n);
   return 0;
}