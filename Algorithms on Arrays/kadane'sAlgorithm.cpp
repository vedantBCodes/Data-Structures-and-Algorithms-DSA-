//Maximum sum of a SubArray in an Array (Kadane's Algorithm)
#include <iostream>
#include <vector>
#include <climits> //To use INT_MIN
using namespace std;
int maxSubArrays(vector <int>nums)
{
    int maxSum = INT_MIN;  // To handle all negative numbers
    int currentSum = 0;

    for (int num : nums) {
        currentSum += num;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;  // Reset if sum goes below 0
        }
    }
    return maxSum;
}
int main() 
{
    vector<int> vect1 = {0,2,3,4,5};
    int total = maxSubArrays(vect1);
    cout<<"The maximum sum of a subarray is :"<<total;
}


