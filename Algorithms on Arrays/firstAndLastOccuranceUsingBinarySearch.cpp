/*
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.

Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1
Output: 1 2

Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
*/
#include<iostream>
using namespace std;

         // Method -->1 (Normal method)
void firstAndLastOccurances(int arr[],int n,int key)

{
   int cnt=0;
   int first,last;
   for(int i=0;i<7;i++)
   {
       if(arr[i]==key)
       {
           cnt++;
           if(cnt==1)
           {
               first=i;
           }
           last=i;
       }
   }
   cout<<"First occurance :"<<first<<endl;
   cout<<"Last occurance :"<<last<<endl;
}

      // Method -->2 (Using binary sort)
void firstOccurance(int arr[],int n,int key) //first occurance or leftmost occrance
{
    
    int start=0;
    int end=n-1;
    int ans;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else if(key < arr[mid])
        {
            end=mid-1;
        }
    }
    cout<<"First occurance :"<<ans<<endl;
}

void lastOccurance(int arr[],int n,int key) //last occurance or rightmost occurance
{
    int start=0;
    int end=n-1;
    int ans;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else if(key < arr[mid])
        {
            end=mid-1;
        }
    }
    cout<<"Last occurance :"<<ans<<endl;
}

int main()
{
    int arr[]={1,2,3,3,3,4,4},n=7;
    int key=3;
    firstAndLastOccurances(arr,n,key);
    firstOccurance(arr,n,key);
    lastOccurance(arr,n,key);
}