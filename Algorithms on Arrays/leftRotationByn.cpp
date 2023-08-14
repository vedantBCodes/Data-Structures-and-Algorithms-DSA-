#include<iostream>
using namespace std;
 
int* leftRotationByn(int arr[],int x,int n)
{
    int cnt=1;
    while(cnt<=n)
    {
        int temp=arr[0];
        for(int j=0;j<x-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[x-1]=temp;
        cnt++;
    }
    return arr;
}

int main()
{
   int arr[]={1,2,3,4,5},x=5;
   int n;
   cout<<"How many times you want to rotate the array:";
   cin>>n;
   int *arr2=leftRotationByn(arr,x,n);
   cout<<"Array elements after rotating array "<<n<<" times ";
   for(int i=0;i<x;i++)
   {
    cout<<arr2[i]<<" ";
   }
   return 0;
}