#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int upperBound2(vector<int> &nums, int x)
{
    int left = 0;
    int right = nums.size() - 1;
    int ans = nums.size();

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > x)
        {
            right = mid - 1;
            ans = mid;
        }
        else
        {
            left = mid + 1;
        }
        // cout<< nums[mid];
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3};
    int ans = upperBound2(arr, 2);
    cout << ans;
    return 0;
}