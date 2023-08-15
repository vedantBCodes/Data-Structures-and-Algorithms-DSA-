//Program to find the maximum sum of x consecutive integers
#include<iostream>
using namespace std;
 
int maxSum(int arr[],int size,int x)
{
    int max=0;
    for(int i=0;i<=(size-x);i++)
    {
        int cnt=0;
        int sum=0;
        int j=i;
        while(cnt<x)
        {
            sum=sum+arr[j];
            j++;
            cnt++;
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}

int main()
{
    int arr[]={5,10,60,9,3},size=5;
    int x=3;
    int sum=maxSum(arr,size,x);
    cout<<"Maximum sum of "<<x<<" consecutive integers is "<<sum;
   return 0;
}