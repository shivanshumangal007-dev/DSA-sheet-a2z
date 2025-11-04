#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int findMin(vector<int> &nums)
{

    int l = 0, r = nums.size() - 1;
    int mid;
    while (l < r)
    {
        mid = l + (r - l) / 2;

        if (nums[mid] > nums[r])
            l = mid + 1;
        else
        {
            r = mid;
        }
    }
    return nums[l];
}
int main(){
    
    return 0;
}