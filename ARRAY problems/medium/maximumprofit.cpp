#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <climits>
#include <array>

using namespace std;
int maxProfit(vector<int> &prices)
{
    int buy = INT_MAX;
    int sell = 0;
    int currmax = INT_MIN;
    int Maximum = INT_MIN;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
            sell = prices[i];
        }
        if (prices[i] >= buy && prices[i] >= sell)
        {
            sell = prices[i];
        }

        currmax = sell - buy;
        Maximum = max(Maximum, currmax);
    }
    return Maximum;
}
int main(){
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(nums);
    cout << ans;

    // explanation:  Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
    // Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
    return 0;
}