#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>
#include<unordered_set>

using namespace std;

//chat gpt
int longestConsecutive(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;

    for (int num : s)
    {
        // Only start counting if 'num' is the START of a sequence
        if (s.find(num - 1) == s.end())
        {
            int currentNum = num;
            int streak = 1;

            // Keep checking the next consecutive numbers
            while (s.find(currentNum + 1) != s.end())
            {
                currentNum++;
                streak++;
            }

            longest = max(longest, streak);
        }
    }

    return longest;
}
//mine one
int longestConsecutive1(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    if (nums.size() == 1)
    {
        return 1;
    }
    sort(nums.begin(), nums.end());
    int currCnt = 1;
    int maxCnt = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] - nums[i] == 1)
        {
            currCnt++;
            maxCnt = max(maxCnt, currCnt);
        }
        else if (nums[i + 1] - nums[i] == 0)
        {
            continue;
        }
        else
        {
            currCnt = 1;
        }
    }
    return maxCnt;
}
int main(){
    
    return 0;
}