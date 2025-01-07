/*
 We are given an array of distinct integers, and our task is to find the closest (positive wise) greater element on left of every element.
 If there is no greater element on left, then we print -1.
 We will explore both the Naive and the Efficient Approach (using Stack) to solve the problem.
 
 I/O : arr[]=[20,30,10,5,15];
 O/P : [-1,-1,30,10,30];

*/
#include <iostream>
#include <stack>
using namespace std;

void printPrevGreater(int arr[],int n)
{
    stack<int>s;
    s.push(arr[0]);
    for(int i=0;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i])
            s.pop();
        int pg=s.empty()?-1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}

int main() 
{ 
    int arr[]={20,30,10,5,15};
    int n=5;
    printPrevGreater(arr,n);
    return 0; 
}







