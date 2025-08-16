#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int firstUniqueCharacter(vector<int> nums)
{
    unordered_map<int, int> freq;
    queue<int> q;

    // Count frequencies + maintain order in queue
    for (int num : nums) {
        freq[num]++;
        q.push(num);

        // Pop from front if it’s not unique anymore
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
    }

    if (q.empty()) return -1; // no unique element
    return q.front(); // first unique element
}

int main()
{
    vector<int> nums = {1,2,3,3,4,2,1};

    int result = firstUniqueCharacter(nums);

    if (result == -1) {
        cout << "No unique element";
    } else {
        cout << "The 1st unique element is : " << result;
    }

    return 0;
}
