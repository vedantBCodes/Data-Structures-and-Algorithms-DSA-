#include <iostream>
using namespace std;

void SubarraysInAnArrays(int arr[], int Asize)
{
    cout<<"The possible subarrays are \n";
    for (int i = 0; i < Asize; i++)
    {
        for (int j = i; j < Asize; j++)
        {
            cout<<"[ "<<arr[i]<<" ";
            for(int k=i+1;k<j+1;k++)
            {
           cout<<arr[k]<<" ";
            }
            cout<<"]";
             cout<<endl;
        }
       
    }
}

int main()
{
    int arr[20],Asize;
    cout << "Enter the size of array:";
    cin >> Asize;
    cout<<"Enter any "<<Asize<<" array elements:";
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    SubarraysInAnArrays(arr,Asize);

    return 0;
}