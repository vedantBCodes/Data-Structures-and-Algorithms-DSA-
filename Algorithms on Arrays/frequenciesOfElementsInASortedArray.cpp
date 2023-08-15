#include<iostream>
using namespace std;
  //Frequencies of array elements in a sorted array
void frequencies(int arr[],int x)
{
    int i=0,j;
   while(i<x)
   {
    int cnt=0;
     for(j=i;j<x;j++)
     {
        if(arr[i]==arr[j])
        {
            cnt++;
        }
        else
        {
            break;
        }
     }
     cout<<arr[i]<<" occurs "<<cnt<<" times "<<endl;
     i=j;
   }
}

int main()
{
    int arr[]={1,2,2,3,4,5,5},x=7;
    frequencies(arr,x);
   return 0;
}