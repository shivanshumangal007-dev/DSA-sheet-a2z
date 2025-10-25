#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <array>

using namespace std;

// time coplexity  = O(n2);


int maxLen(vector<int> nums)
{
    int len = 0;
    int maxlen = 0;
    int left = 0;
    while (left < nums.size())
    {
        int right = left;
        int sum = 0;
        while (right < nums.size())
        {
            sum += nums[right];

            if (sum == 0)
            {
                len = right - left + 1;
                maxlen = max(maxlen, len);
            }
            right++;
        }

        if (maxlen >= nums.size() - left)
        {
            return maxlen;
        }
        // cout<< maxlen << endl;
        left++;
    }
    return maxlen;
}
 
// using hashmap  time complexity = O(n) , nut space complexity = O(n);

int maxLen2(vector<int> nums)
{

    int sum = 0;
    int len = 0;

    int maxlen = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {

        sum += nums[i];

        if (sum == 0)
        {
            len = i + 1;
            maxlen = max(maxlen, len);
        }
        else if(map.count(sum)){
            maxlen = max(maxlen, i - map[sum] );
        }
        else{
            map[sum] = i;
        }
    }
    return maxlen;
}
int main()
{
    vector<int> nums = {10,2,0};

    int ans = maxLen2(nums);

    cout << ans;

    // cout<< 12;
    return 0;
}