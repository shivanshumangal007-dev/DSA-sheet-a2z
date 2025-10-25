#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> finalans;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        if (nums[i] > 0)
        {
            break;
        }

        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {

            int sum = nums[left] + nums[right] + nums[i];
            if (sum > 0)
            {
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                finalans.push_back({nums[left], nums[right], nums[i]});

                while (left < right && nums[left] == nums[left + 1])
                {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1])
                {
                    right--;
                }
                right--;
                left++;
            }
        }
    }
    return finalans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    for(int i = 0;i<ans.size() ; i++){
        cout<< "{";
        for(int j = 0; j<ans[0].size() ; j++){
            cout<< ans[i][j] << " ,";
        }
        cout << "}"<<endl;
    }
    return 0;
}
