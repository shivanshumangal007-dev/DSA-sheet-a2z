#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
bool ispossible(vector<int> &boards, int k, int mid)
{
    int currSum = 0;
    int noOfpainter = 1;
    for (auto board : boards)
    {
        if (board > mid)
            return false;
        if (currSum + board > mid)
        {
            noOfpainter++;
            currSum = board;
            if (noOfpainter > k)
                return false;
        }
        else
        {
            currSum += board;
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int right = 0, left = 0;
    for (auto num : boards)
    {
        right += num;
    }

    int mid, ans = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (ispossible(boards, k, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main(){
    
    return 0;
}