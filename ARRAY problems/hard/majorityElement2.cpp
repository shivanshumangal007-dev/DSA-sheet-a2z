#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    // chossing potenicial candidate
    int count1 = 0;
    int count2 = 0;
    int candidate1;
    int candidate2;

    int n = nums.size();

    for (auto i : nums)
    {
        if (count1 == 0 && i != candidate2)
        {
            candidate1 = i;
            count1++;
        }
        else if (count2 == 0 && i != candidate1)
        {
            candidate2 = i;
            count2++;
        }
        else if (i == candidate1)
        {
            count1++;
        }
        else if (i == candidate2)
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;
    // counting occurences
    for (auto i : nums)
    {
        if (i == candidate1)
        {
            count1++;
        }
        else if (i == candidate2)
        {
            count2++;
        }
    }

    //confirming occurences

    n = n / 3;
    if (count1 > n && count2 > n)
    {
        return {candidate1, candidate2};
    }
    else if (count1 > n)
    {
        return {candidate1};
    }
    else if (count2 > n)
    {
        return {candidate2};
    }
    else
    {
        return {};
    }
}

int main()
{

    return 0;
}