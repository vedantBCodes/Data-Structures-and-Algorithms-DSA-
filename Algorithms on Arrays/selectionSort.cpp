#include<iostream>
using namespace std;
 
int* selectionSort(int arr[],int Asize)
{
    for(int i=0;i<Asize;i++)
    {
        for(int j=i+1;j<Asize;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    int* sortedArray=selectionSort(arr,Asize);
    cout<<"The sorted array:";
    for(int i=0;i<Asize;i++)
    {
       cout<<sortedArray[i]<<" ";
    }
   return 0;
}