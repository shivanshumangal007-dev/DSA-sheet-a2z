#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++)
    { 
        int subtract = target - nums[i];
        if (numMap.count(subtract))
        {
            return {(numMap[subtract]), i+1};
        }
        numMap[nums[i]] = i+1;
    }
    return {};
}
// only if given arr is sorted
vector<int> twoSum2(vector<int> &nums, int target)
{  
    sort(nums.begin() ,nums.end());
    int st = 0;
    int en = nums.size() - 1;
    while(st < en){
        int currsum = nums[st] + nums[en];

        if(currsum < target){
            st++;
        }
        else if(currsum > target){
            en--;
        }
        else{
            return {st+1 ,en+1};
            break;
        }
    }


}
int main()
{
    vector<int> nums = {2,7  , 11, 15};
    int target = 18;

    // vector<int> ans = twoSum(nums , target);
    //only if given arr is sorted
    vector<int> ans = twoSum(nums , target);

    for(auto num : ans ){
        cout<< num << " ";
    }
    cout<< endl;

    return 0;
}