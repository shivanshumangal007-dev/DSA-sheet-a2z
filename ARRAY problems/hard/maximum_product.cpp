#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int maxProduct(vector<int> &nums)
{
    int maxi = nums[0];
    int mini = nums[0];
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            int temp = maxi;
            maxi = mini;
            mini = temp;
        }
        maxi = max(nums[i], maxi * nums[i]);
        mini = min(nums[i], mini * nums[i]);

        ans = max(ans, maxi);
    }

    return ans;
}
int main(){
    vector<int> temp = {2, 3, -2, 4}; //ans - 6
    // vector<int> temp = {-2, 0, -1}; // ans - 0

    return 0;
}