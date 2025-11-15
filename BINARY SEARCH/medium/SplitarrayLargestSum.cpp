#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

bool ispossible(vector<int> &nums, int k, int mid)
{
    int currSum = 0;
    int noOfSubarray = 1;
    for (auto num : nums)
    {
        if (num > mid)
            return false;
        if (currSum + num > mid)
        {
            noOfSubarray++;
            currSum = num;
            if (noOfSubarray > k)
                return false;
        }
        else
        {
            currSum += num;
        }
    }
    return true;
}

int splitArray(vector<int> &nums, int k)
{
    int right = 0, left = 0;
    for (auto num : nums)
    {
        right += num;
    }

    int mid, ans = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (ispossible(nums, k, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main()
{

    return 0;
}