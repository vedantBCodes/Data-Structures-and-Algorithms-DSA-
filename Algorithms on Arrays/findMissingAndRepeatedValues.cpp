/*
Find Missing and Repeated Values

You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

Example 1:

Input: grid = [[1,3],[2,2]]
Output: [2,4]
Explanation: Number 2 is repeated and number 4 is missing so the answer is [2,4].

Example 2:

Input: grid = [[9,1,7],[8,9,2],[3,4,6]]
Output: [9,5]
Explanation: Number 9 is repeated and number 5 is missing so the answer is [9,5].
*/
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &vec) //Approach 1 - using <unordered_map>
{
    vector<int> v;
    for (auto &row : vec) {
        for (auto &col : row) {
            v.push_back(col);
        }
    }

    int n = vec.size();       // number of rows
    int total = n * n;        // numbers are 1..n*n

    unordered_map<int,int> freq;

    for (int x : v) {
        freq[x]++;
    }

    vector<int> ans(2, -1);   // ans[0] = repeated, ans[1] = missing

    for (int i = 1; i <= total; i++) {
        if (freq.find(i) == freq.end()) {
            ans[1] = i;  // missing
        }
        else if (freq[i] == 2) {
            ans[0] = i;  // repeated
        }
    }
    return ans;
}

vector<int> findMissingAndRepeatedValues2(vector<vector<int>> &vec)  //Approach 2 - using set
{
    set<int> s1;
    vector<int> ans(2, -1);   // ans[0] = repeated, ans[1] = missing
    for (auto &row : vec) 
    {
        for (auto &col : row) 
        {
           if (s1.find(col) == s1.end()) 
           {
              s1.insert(col);
           }
          else
           {
              ans[0]=col;
           }
        }
    }
    int n = vec.size();       // number of rows
    int total = n * n;        // numbers are 1..n*n
    for (int i = 1; i <= total; i++) 
    {
        if (s1.find(i) == s1.end()) 
           {
              ans[1]=i;
           }
    }
    return ans;
    
}

int main() {
    vector<vector<int>> mat = {{1,2},{2,3}};
    vector<int> result = findMissingAndRepeatedValues2(mat);

    cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;
}
