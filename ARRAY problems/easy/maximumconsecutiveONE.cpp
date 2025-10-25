#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int prvmax = 0;
    int cnt = 0;
    int temp = 1;
    for (auto num : nums)
    {
        if (num == temp)
        {

            cnt++;
        }
        else
        {
            prvmax = max(prvmax, cnt);
            cnt = 0;
        }
    }
    prvmax = max(prvmax, cnt);
    return prvmax;
}
int main(){
    vector<int> nums = {1,0,1,1,1,0,1};
    // ans-> 3
    int ans = findMaxConsecutiveOnes(nums);
    cout <<  ans;
    return 0;
}