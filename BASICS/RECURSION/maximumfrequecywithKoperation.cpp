// maximum frequency operation
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>

using namespace std;

int maxFrequency(vector<int> &nums, int k)
{
    // first sorting
    sort(nums.begin(), nums.end());

    // initilaising some var wit zero

    long long int left = 0;
    long long int right = 0;
    long long int ans = 0;
    long long int total = 0;

    while (right < nums.size())
    {
        total += nums[right];

        while ((nums[right] * (right - left + 1) > total + k) && left < nums.size())
        {
            total -= nums[left];
            left++;
        }

        ans = max(ans, right - left + 1);
        right++;
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 4, 8, 13};
    int k = 5;

    cout << " ans is : " << maxFrequency(arr, k);
    return 0;
}

/*
Explanation: There are multiple optimal solutions:
- Increment the first element three times to make nums = [4,4,8,13]. 4 has a frequency of 2.
- Increment the second element four times to make nums = [1,8,8,13]. 8 has a frequency of 2.
- Increment the third element five times to make nums = [1,4,13,13]. 13 has a frequency of 2.
*/