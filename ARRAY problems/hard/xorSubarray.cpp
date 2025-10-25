#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <array>

using namespace std;
int subarraysWithXorK(vector<int> &nums, int k)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i;
        int res = 0;
        while (j < nums.size())
        {
            res = res ^ nums[j];

            if (res == k)
            {
                ans++;
            }
            j++;
        }
    }

    return ans;
}
int subarraysWithXorK2(vector<int> &nums, int k)
{
    int curr_xor = 0;

    unordered_map<int, int> map;
    int ans = 0;

    for (int i = 0; i < nums.size() ; i++)
    {
        curr_xor = curr_xor ^ nums[i];
        int req_xor = curr_xor ^ k;

        if (map.count(req_xor))
        {
            ans++;
        }
        if (curr_xor == k)
        {
            ans++;
        }
        else
        {
            map[i] = curr_xor;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {5, 6, 7, 8, 9};
    int k = 5;

    int ans = subarraysWithXorK2(nums, k);

    cout << ans;
    return 0;
}