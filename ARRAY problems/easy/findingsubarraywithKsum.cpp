#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int longestSubarray(vector<int> &nums, int k)
{
    int fixedmax = 0;
    int currMax = 0;

    int itr1 = 0;
    int itr2 = 0;
    int sum = 0;

    while (itr2 < nums.size() && itr1 <= itr2)
    {
        if (sum < k && nums[itr2] < k)
        {
            sum += nums[itr2];
            itr2++;
        }
        else if (nums[itr2] == k)
        {   
            fixedmax = max(1, fixedmax);
            sum = 0;
            itr2++;
            itr1 = itr2;
        }
        else if(nums[itr2] > k){
            sum = 0;
            itr2++;
            itr1 = itr2;
        }
        else if (sum > k)
        {
            sum -= nums[itr1];
            itr1++;
        }
        else
        {
            currMax = itr2 - itr1 ;
            fixedmax = max(currMax, fixedmax);
            sum -= nums[itr1];
            itr1++;
        }
        // cout<< itr1<< " " <<itr2<< " "<< sum<<" " <<fixedmax << " " <<endl;  //just for checking
    }
    return fixedmax;
}
int main(){
    vector<int> arr = {1, 1, 1, 1, 15};

    int ans = longestSubarray(arr , 15);

    cout<< ans;
    return 0;
}