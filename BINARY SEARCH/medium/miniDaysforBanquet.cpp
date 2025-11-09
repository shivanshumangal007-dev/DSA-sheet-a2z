#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
bool name(vector<int> bloomDay, int m, int k, int i)
{
    int n = bloomDay.size();
    vector<int> isblommed(n, 0);

    for (int j = 0; j < n; j++)
    {
        if (bloomDay[j] <= i)
        {
            isblommed[j] = 1;
        }
    }

    int flowersNeededForBan = k;
    int ban = m;
    for (auto blommed : isblommed)
    {
        if (blommed == 1)
        {
            flowersNeededForBan--;
        }
        else
        {
            flowersNeededForBan = k;
        }

        if (flowersNeededForBan == 0)
        {
            ban--;
            flowersNeededForBan = k;
        }

        if (ban == 0)
        {
            return true;
        }
    }
    return false;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    // long long int totalFlowers = m*k;
    if (m > bloomDay.size() / k)
    {
        return -1;
    }
    // if(m == bloomDay.size()/k){
    //     return *max_element(bloomDay.begin(), bloomDay.end());
    // }

    int minDays = *max_element(bloomDay.begin(), bloomDay.end());
    int n = bloomDay.size();

    int left = 0, right = minDays;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (name(bloomDay, m, k, mid) && mid < minDays)
        {
            minDays = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return minDays;
}
int main(){
    
    return 0;
}