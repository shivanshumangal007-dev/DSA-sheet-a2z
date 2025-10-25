#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
vector<int> missing_repeating_no(vector<int> nums)
{
    // vector<int> temp = nums;
    sort(nums.begin(), nums.end());
    vector<int> ans(2);
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            ans[0] = nums[i];
        }
        else if (i == 0 && nums[i] != 1)
        {
            ans[0] = 1;
        }
        else if (i > 0 && nums[i] != (nums[i - 1] + 1))
        {

            ans[1] = nums[i - 1] + 1;
        }
        // cout << ans[0] << " " << ans[1];
    }
    return ans;
}

vector<int> missing_repeating_no2(vector<int> &nums)
{
    vector<int> occ(nums.size() , 0);
    vector<int> ans(2);
    for(auto num : nums){
        occ[num - 1]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if(occ[i] == 0){
            ans[1] = i+1;
        }
        else if (occ[i] == 2)
        {
            ans[0] = i+1;
        }
        
    }
    return ans;
    
}
int main()
{
    vector<int> nums = {1, 2, 3, 6, 7, 5, 7};
    vector<int> ans = missing_repeating_no2(nums);

    cout << ans[0] << " " << ans[1];
    return 0;
}