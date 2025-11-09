#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
long long int hoursTOeatALL(vector<int> &piles, long long int n)
{
    long long hours = 0;
    for (int pile : piles)
    {
        hours += ceil((double)pile / n);
    }
    return hours;
}
int minEatingSpeed(vector<int> &piles, int h)
{

    long long left = 1;
    long long right = *max_element(piles.begin(), piles.end());
    long long int ans = -1;
    while (left <= right)
    {
        long long int mid = left + (right - left) / 2;
        if (hoursTOeatALL(piles, mid) <= h)
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