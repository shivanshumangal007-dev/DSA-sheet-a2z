#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int pivotIndex(vector<int> &nums)
{
    int st = 0;
    int en = nums.size() - 1;
    while (st <= en)
    {
        int mid = st + (en - st) / 2;
        
        if (mid > 0 && mid < nums.size() - 1 &&nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[st] > nums[mid])
        {
            en = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {1};
    cout<< pivotIndex(nums);
    return 0;
}