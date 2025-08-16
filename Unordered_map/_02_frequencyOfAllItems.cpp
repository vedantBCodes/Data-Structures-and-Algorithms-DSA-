//Frequnecy of all the elements from a vector
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void frequncyOfAllElements(vector<int> nums)
{
    unordered_map<int , int> freq;
    for(int num : nums)
    {
        freq[num] = freq[num] + 1; //1st time when the key is not present , it automatically generated a key with that name and with a default value of 0;
    }
    for(auto it : freq )
    {
        cout<<it.first<<" occurs "<<it.second<<" times ."<<endl;
    }
}
int main() 
{
   vector<int> nums={1,2,3,2,4,3,1,5,2};
   frequncyOfAllElements(nums);
    return 0;
}