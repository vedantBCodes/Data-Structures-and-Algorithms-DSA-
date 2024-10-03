#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Method-1 (using nested for loop)

void insertionSort1(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
// Method-2 (using for and while loop)

void insertionSort2(int arr[],int Asize)
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
}

int main()
{
    int arr1[]={4,12,5,13,1},n=5;
    int arr2[]={4,2,3,5,1},m=5;
    insertionSort1(arr1,n);
    printArray(arr1,n);
    cout<<endl;
    insertionSort2(arr2,m);
    printArray(arr2,m);
   return 0;
}
