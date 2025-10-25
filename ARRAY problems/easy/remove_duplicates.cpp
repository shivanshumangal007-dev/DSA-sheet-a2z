#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int removeDuplicates(vector<int> &nums)
{
    vector<int> temp;
    int tempIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            temp.push_back(nums[i]);
            // tempIndex++;
        }

        else if (nums[i] != temp[tempIndex])
        {
            tempIndex++;
            // temp[tempIndex] = nums[i];
            temp.push_back(nums[i]);
        }
        else
        {
            continue;
        }
        // cout << "hi";
    }

    for (int i = 0; i <= tempIndex; i++)
    {
        nums[i] = temp[i];
    }

    return tempIndex + 1;
}
int main()
{
    vector<int> arr = {2, 5, 6, 7};

    removeDuplicates(arr);

    for(auto i : arr){
        cout << i;
    }
    return 0;
}