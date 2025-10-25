#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int lowerBound(vector<int> &nums, int x)
{
    int i = 0;
    while (i < nums.size() && nums[i] < x)
    {
        i++;
    }
    if (i < nums.size() && nums[i] >= x)
        return i;
    else
        return nums.size();
}
int lowerBound2(vector<int>& nums, int x){
    int left = 0;
    int right = nums.size() - 1;
    int ans = nums.size();
    
    while(left <= right){
        int mid = left + ( right - left )/2;

        if(nums[mid] >= x){
            right = mid -1;
            ans = mid;
        }
        else{
            left = mid +1;
        }
        // cout<< nums[mid];
    }
    return ans;

}
int main(){
    vector<int> arr = {3, 5, 8, 15, 19};
    int ans = lowerBound2(arr, 9);
    cout<< ans;
    return 0;
}