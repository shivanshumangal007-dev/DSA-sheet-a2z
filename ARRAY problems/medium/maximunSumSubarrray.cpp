#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <array>

using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int last_sum = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
        if (sum > last_sum)
        {
            last_sum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return last_sum;
}
// we are setting sum - 0 when sum become less than 0 due to : (Kadane's algorithm) 
/*
For example, consider the array [-2, 1, -3, 4].

Start with sum = 0.

At -2: sum becomes -2. Since sum < 0, we reset sum = 0. This is because continuing with a sum of -2 would only make a future positive number smaller.

At 1: sum becomes 1. max_so_far is 1.

At -3: sum becomes 1 + (-3) = -2. Since sum < 0, we reset sum = 0.

At 4: sum becomes 4. max_so_far is updated to 4.
*/
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maxSubArray(nums);
    cout << ans;
    return 0;
}