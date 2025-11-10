#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
bool isPosiible(vector<int> stalls, int k, int mid)
{
    sort(stalls.begin(), stalls.end());

    int cowscount = 1;
    int intialcount = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - intialcount >= mid)
        {
            cowscount++;
            if (cowscount == k)
            {
                return true;
            }
            intialcount = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] > maxi)
        {
            maxi = stalls[i];
        }
    }
    int e = maxi;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPosiible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;

    // return e;/
}
int main(){
    
    return 0;
}