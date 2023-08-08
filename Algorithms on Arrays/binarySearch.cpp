#include<iostream>
using namespace std;
void binarySearch(int arr[],int x,int key)
{
   int indexOfKey;
   bool isPresent=false;
   int startPoint=0;
   int endPoint=x; //Here x is the size of array
   while(startPoint<=endPoint)
   {
    int midPoint=(startPoint+endPoint)/2;
    if(arr[midPoint]==key)
    {
        isPresent=true;
        indexOfKey=midPoint;
        break;
    }
    else if(arr[midPoint]>key)
    {
        endPoint=midPoint-1;
    }
    else
    {
        startPoint=midPoint+1;
    }
   }
   if(isPresent==true)
   {
    cout<<key<<" is present at index "<<indexOfKey;
   }
   else
   {
    cout<<key<<" is not there in a given array";
   }
}
int main()
{
    int Asize,arr[10],key;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter any "<<Asize<<" array:";
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a key:";
    cin>>key;
    binarySearch(arr,Asize,key);
}