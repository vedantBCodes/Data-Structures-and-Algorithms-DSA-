#include<iostream>
using namespace std;
void linearSearch(int arr[],int x,int key)
{
   int indexOfKey;
   bool isPresent=false;
   for(int i=0;i<x;i++)
   {
       if(arr[i]==key)
       {
        indexOfKey=i;
        isPresent=true;
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
    linearSearch(arr,Asize,key);
}