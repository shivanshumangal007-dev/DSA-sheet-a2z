#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int findPeakElement(vector<int> &nums)
{

    int i = 0;
    for (; i < nums.size(); i++)
    {
        bool left = false;
        bool right = false;

        if ((i > 0 && nums[i - 1] < nums[i]) || (i == 0))
        {
            left = true;
        }
        if ((i < nums.size() - 1 && nums[i + 1] < nums[i]) || (i == nums.size() - 1))
        {
            right = true;
        }

        if ((left && right) || i + 1 == nums.size())
            break;
    }

    return i;
}
int main()
{
    vector<int> nums = {1,6,5,4,3,5};

    cout << findPeakElement(nums);
    return 0;
}