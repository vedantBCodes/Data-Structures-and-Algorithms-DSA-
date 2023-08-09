#include<iostream>
using namespace std;
 
int* insertionSort(int arr[],int Asize)
{
    for(int i=1;i<Asize;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
        arr[j+1]=current;
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
    int* sortedArray=insertionSort(arr,Asize);
    cout<<"The sorted array:";
    for(int i=0;i<Asize;i++)
    {
       cout<<sortedArray[i]<<" ";
    }
   return 0;
}