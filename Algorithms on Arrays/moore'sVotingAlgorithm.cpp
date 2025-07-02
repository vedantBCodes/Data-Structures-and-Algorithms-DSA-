/* Given an array of size n, find the majority element — the element that appears more than ⌊n / 2⌋ times .

If such an element exists, return it. If not, return -1 (optional based on variation) .
If an element occurs more than half the times, it will survive cancellation against all other elements .

📌 Intuition:
Keep a count and a candidate

If the current element equals the candidate → increment count

If different → decrement count

If count drops to 0 → change candidate to current element

*/

// Majority Element - It is the element whole occurance is more than floor(n/2) where n is the size of the vector
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector <int> nums) 
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
int main () 
{
    vector<int> vect1 = {1,2,1,2,2};
    int ele = majorityElement(vect1);
    cout<<"The majority element is : "<<ele;
}


