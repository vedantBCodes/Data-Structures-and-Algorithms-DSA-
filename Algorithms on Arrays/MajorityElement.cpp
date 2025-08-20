/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int> v1) //Brute Force Appraoch
{
    for(int i=0;i<v1.size();i++)
    {
        int cnt=0;
        for(int j=0;j<v1.size();j++)
        {
            if(v1[i]==v1[j])
            {
                cnt++;
            }
        }
        if(cnt> (v1.size()/2))
        {
            return v1[i];
        }
    }
    return -1;
}
int majorityElement2(vector<int> v1) //Better Approach Using unordered_map
{
    int n=v1.size();
   unordered_map<int , int> freq;
   for(int num : v1)
   {
       freq[num] = freq[num] + 1;
       if(freq[num] > n/2)
       {
           return num;
       }
   }
   return -1;
}

int majorityElement3(vector <int> nums) //Best Approach --> Boyer–Moore Voting Algorithm
{
    int freq=0;
    int majorityElement=nums[0];
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
       if(freq==0)
       {
           majorityElement=nums[i];
       }
       if(majorityElement==nums[i])
       {
           freq++;
       }
       else
       {
           freq--;
       }
    }
    return majorityElement;
}

int main()
{
    vector<int> v1 = {2,2,2,1,4,2,2,} ;
    int majorityEle=majorityElement3(v1);
    if(majorityEle!=-1)
    {
        cout<<"Majority Element : "<<majorityEle;
    }
    else
    {
        cout<<"No majority element";
    }
    return 0;
}