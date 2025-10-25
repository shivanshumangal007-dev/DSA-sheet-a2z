#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
//leetcode discusion
// void moveZeroes(vector<int> &nums)
// {
//     int j = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] != 0)
//         {
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }
// }
//mysolution
void moveZeroes(vector<int> &nums)
{
    int size = nums.size();

    for (int i = 0; i < size;)
    {
        if (nums[i] == 0)
        {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
            size--;
        }

        else
        {
            i++;
        }
    }
}
int main()
{

    return 0;
}