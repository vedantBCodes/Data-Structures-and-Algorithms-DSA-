#include<iostream>
using namespace std;
bool linearSearch(int arr[],int x,int num)
{
    bool isPresent=false;
   for(int i=0;i<x;i++)
   {
       if(arr[i]==num)
       {
        isPresent=true;
       }
   }
   return isPresent;
}
int main()
{
    int Asize,arr[10],num;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter any "<<Asize<<" array:";
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search:";
    cin>>num;
    bool check=linearSearch(arr,Asize,num);
    if(check==true)
   {
    cout<<num<<" is present in a given array";
   }
   else
   {
   cout<<num<<" is not there in a given array";
   }
}