#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;

bool ispossible(vector<int> &arr, int k, int mid)
{
    int studentCnt = 1;
    int pages = 0;
    for (auto ar : arr)
    {
        if (ar > mid)
            return false;
        if (pages + ar > mid)
        {
            studentCnt++;
            pages = ar;
            if (studentCnt > k)
                return false;
        }
        else
        {
            pages += ar;
        }
    }
    return true;
}
int findPages(vector<int> &arr, int n, int m)
{
    if (arr.size() < m)
        return -1;
    int sum = 0;
    for (auto ar : arr)
    {
        sum += ar;
    }

    int left = *min_element(arr.begin(), arr.end()), right = sum;
    int mid = 0;
    int ans = -1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        bool midCon = ispossible(arr, m, mid);
        if (midCon)
        {
            right = mid - 1;
            ans = mid;
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