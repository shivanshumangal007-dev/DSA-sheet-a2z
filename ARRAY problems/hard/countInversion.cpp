// Definition of inversion: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i]

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

class count_inversion
{
private:

public:
    int cnt = 0;
    void merge_and_count(vector<int> &nums, int st, int mid, int end)
    {
        int first = st;
        int second = mid + 1;

        while (first <= mid)
        {
            while (second <= end && nums[first] > nums[second])
            {
                second++;
            }
            cnt +=( second - mid - 1);
            first++;
        }

        first = st;
        second = mid + 1;
        vector<int> temp;
        while (first <= mid && second <= end)
        {
            if (nums[first] > nums[second])
            {
                temp.push_back(nums[second]);
                second++;
            }
            else
            {
                temp.push_back(nums[first]);
                first++;
            }
        }
        while (first <= mid)
        {
            temp.push_back(nums[first]);
            first++;
        }
        while (second <= end)
        {
            temp.push_back(nums[second]);
            second++;
        }

        for (int i = 0; i < temp.size(); i++)
        {
            nums[i + st] = temp[i];
        }
    }
    void countInversionBreak(vector<int> &nums, int st, int end)
    {
        if(st >= end){
            return ;
        }

        int mid = st + (end - st) / 2;

        countInversionBreak(nums, st, mid);
        countInversionBreak(nums, mid + 1, end);

        merge_and_count(nums, st, mid, end);
    }
};

int main()
{
    vector<int> nums = {2, 3, 7, 1, 3, 5};

    // cout << ;
    count_inversion c1;
    c1.countInversionBreak(nums, 0, nums.size() - 1);
    cout<< c1.cnt << endl;
    vector<int> nums2 = {-10, -5, 6, 11, 15, 17};

    // cout << ;
    count_inversion c2;
    c2.countInversionBreak(nums, 0, nums.size() - 1);
    cout << c2.cnt << endl;
    return 0;
}
