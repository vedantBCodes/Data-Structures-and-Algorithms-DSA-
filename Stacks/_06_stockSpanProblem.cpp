/*
The stock span problem is a financial problem where we have a series of daily price quotes for a stock denoted by an array arr[] and the task is to calculate the span of the stock’s price for all days. The span arr[i] of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the given day is less than or equal to its price on the current day.

Examples:

Input: arr[] = [100, 80, 60, 70, 60, 75, 85]
Output: [1, 1, 1, 2, 1, 4, 6]
Explanation: Traversing the given input span 100 is greater than equal to 100 and there are no more elements behind it so the span is 1, 80 is greater than equal to 80 and smaller than 100 so the span is 1, 60 is greater than equal to 60 and smaller than 80 so the span is 1, 70 is greater than equal to 60,70 and smaller than 80 so the span is 2 and so on.  Hence the output will be 1 1 1 2 1 4 6.

Input: arr[] = [10, 4, 5, 90, 120, 80]
Output: [1, 1, 2, 4, 5, 1]
Explanation: Traversing the given input span 10 is greater than equal to 10 and there are no more elements behind it so the span is 1, 4 is greater than equal to 4 and smaller than 10 so the span is 1, 5 is greater than equal to 4,5 and smaller than 10 so the span is 2,  and so on. Hence the output will be 1 1 2 4 5 1.

*/
#include <iostream>
#include <stack>
using namespace std;

// Naive solution
void spanCount(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        int span=0;
        for(int j=i;j>=0;j--)
        {
            if(arr[j]<=arr[i])
            {
                span++;
            }
        }
        cout<<span<<" ";
    }
}

// Stack solution
void printSpan(int arr[],int n)
{
    stack<int> s ;
    s.push(0);     //Index of 1st element
    cout<<1<<" ";  //span of 1st element
    int span=0;
    for(int i=1;i<n;i++) //starting from the 2nd element
    {
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        if(s.empty()==true)
        {
            span=i+1;
        }
        else
        {
            span=i-s.top(); //span of an element=index of that element - index of the nearest greater element on the left side .
        }
        cout<<span<<" ";
        s.push(i);
    }
}

int main() 
{ 
    int arr[]={18,12,13,14,11,16};
    int n=6;
    spanCount(arr,n);
    cout<<endl;
    printSpan(arr,n);
    return 0; 
}







