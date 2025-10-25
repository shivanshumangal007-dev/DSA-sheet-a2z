#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    // sum till n
    int sum1 = 0;
    for (int i = 0; i <= n; i++)
    {
        sum1 += i;
    }

    // taking sum of array

    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += nums[i];
    }

    return sum1 - sum2;
}
int main()
{

    return 0;
}