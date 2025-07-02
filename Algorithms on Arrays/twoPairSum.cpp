//Given an array of integers and a target sum, find if there exist two elements in the array whose sum is equal to the target.
//Optionally, you may be asked to return the indices or the actual pair(s). 
//Here we return the actual pair .
//Note : Array must be sorted

#include <iostream>
#include <vector>
using namespace std;
vector<int> twoPairSum1(vector <int> nums, int target)  //Time complexity - 0(n2)
{
    vector<int> pair; //empty vector
    int len=nums.size();
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(nums[i] + nums[j] == target)
            {
                pair.push_back(nums[i]);
                pair.push_back(nums[j]);
            }
        }
    }
    return pair;
}

// NOTE : Since we are using sorted array , Time complexity of this problem can be reduced from 0(n2) to 0(n) Using 2 Pointer approach

vector<int> twoPairSum2(vector <int>nums, int target)  //Time complexity - 0(n). Two Ponter approach
{
    vector<int> pair; //empty vector
    int len=nums.size();
    int i=0;
    int j=len-1;
    while(i < j)
    {
       int sum = nums[i] + nums[j];
       if(sum>target)
       {
           j--;
       }
       else if(sum<target)
       {
           i++;
       }
       else
       {
           pair.push_back(nums[i]);
           pair.push_back(nums[j]);
           return pair;
       }
    }
    return pair;
}
int main () 
{
    vector<int> vect1 = {1,2,3,4,5};
    int target=5;
    vector<int> pair1 = twoPairSum1(vect1,target);
     vector<int> pair2 = twoPairSum2(vect1,target);
    cout<<"The pair with sum "<<target<<" is : "<<pair1[0]<<" and "<<pair1[1];
     cout<<"The pair with sum "<<target<<" is : "<<pair2[0]<<" and "<<pair2[1];
}
