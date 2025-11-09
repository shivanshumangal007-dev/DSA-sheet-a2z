#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return nums[0];
    }
    int i = 0;
    for (; i < nums.size() - 1; i += 2)
    {
        if (nums[i] != nums[i + 1])
        {
            break;
        }
    }

    return nums[i];
}
int main(){
    
    return 0;
}