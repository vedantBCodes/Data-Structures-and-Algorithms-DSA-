#include<iostream>
using namespace std;
 
int* bubbleSort(int arr[],int Asize)
{
    int counter=1;
    while(counter<Asize)
    {
        for(int i=0;i<Asize-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    return arr;
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
    int* sortedArray=bubbleSort(arr,Asize);
    cout<<"The sorted array:";
    for(int i=0;i<Asize;i++)
    {
       cout<<sortedArray[i]<<" ";
    }
   return 0;
}