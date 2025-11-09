#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
bool search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    int mid = left + (right - left) / 2;
    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (nums[mid] == target || nums[left] == target || nums[right] == target)
        {
            return true;
        }
        if (nums[left] == nums[mid] && nums[right] == nums[mid])
        {
            left++;
            right--;
        }

        else if (nums[left] > nums[mid])
        {
            if (nums[mid] < target && nums[right] >= target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        else
        {
            if (nums[mid] > target && nums[left] <= target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return false;
}
int main(){
    
    return 0;
}