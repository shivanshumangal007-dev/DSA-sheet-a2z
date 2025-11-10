#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int count = 0;
    int pushCount = 0;
    int itr = 0;
    while (pushCount < k && itr < arr.size())
    {
        count++;
        if (count == arr[itr])
        {
            itr++;
        }
        else
        {
            pushCount++;
        }
    }
    while (pushCount < k)
    {
        count++;
        pushCount++;
    }
    return count;
}
int main()
{

    return 0;
}