#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
void rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % (nums.size())] = nums[i];
    }
    nums = temp;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    rotate(arr, 3);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<endl;
    return 0;
}