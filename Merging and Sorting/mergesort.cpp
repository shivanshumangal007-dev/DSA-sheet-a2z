#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

void mergeTWOArray(vector<int> &nums, int str, int end, int mid)
{
    int len1 = mid - str + 1;
    int len2 = end - mid;

    vector<int> first(len1);
    vector<int> second(len2);
    vector<int> temp;

    int mainIndex = str;
    for (int i = 0; i < len1; i++)
    {
        first[i] = nums[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        second[i] = nums[mainIndex++];
    }

    // main merging
    int index1 = 0;
    int index2 = 0;

    mainIndex = str;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        { // Use <= to maintain stable sort
            nums[mainIndex++] = first[index1++];
        }
        else
        {
            nums[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        nums[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        nums[mainIndex++] = second[index2++];
    }
}
void mergeSort(vector<int> &nums, int str, int end)

{
    if (str >= end)
        return;


    // cout << "  hii" ;
    int mid = str + (end - str) / 2;

    // left part
    mergeSort(nums, str, mid);

    // right part
    mergeSort(nums, mid + 1, end);

    // merging
    mergeTWOArray(nums, str, end, mid);
}

int main()
{
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};

    mergeSort(arr , 0 , arr.size() - 1);

    // cout << "Original array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}