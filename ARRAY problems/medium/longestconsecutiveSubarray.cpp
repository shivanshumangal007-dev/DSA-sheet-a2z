#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int longestConsecutive(vector<int> &nums)
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