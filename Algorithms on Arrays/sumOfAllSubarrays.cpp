#include <iostream>
using namespace std;

void sumOfSubarrays(int arr[], int Asize)
{
    int sum=0;
    for (int i = 0; i < Asize; i++)
    {
        for (int j = i; j < Asize; j++)
        {
            sum=sum+arr[i];
            for(int k=i+1;k<j+1;k++)
            {
            sum=sum+arr[k];
            }
        }
    }
     cout<<"The sum of all subarrays is \n"<<sum;
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
    sumOfSubarrays(arr,Asize);

    return 0;
}