#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    if (intervals.empty())
    {
        return {};
    }
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> finalans;
    finalans.push_back(intervals[0]);

    int curr_end, curr_str, last_end;
    for (int i = 1; i < intervals.size(); i++)
    {
        vector<int> &last_interval = finalans.back();

        curr_end = intervals[i][1];
        curr_str = intervals[i][0];
        last_end = last_interval[1];

        if (curr_str <= last_end)
        {
            last_interval[1] = max(curr_end, last_end);
        }
        else
        {
            finalans.push_back(intervals[i]);
        }
    }
    return finalans;
}
vector<vector<int>> merge2(vector<vector<int>> &intervals)
{
    sort(begin(intervals), end(intervals));
    vector<vector<int>> res;
    int lst = 0;
    res.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] == res[lst][0])
            res[lst][1] = intervals[i][1];
        else if (intervals[i][0] > res[lst][1])
        {
            res.push_back(intervals[i]);
            lst++;
        }
        else{
            res[lst][1] = max(intervals[i][1], res[lst][1]);
        }
    }
    return res;
}
int main(){
    
    return 0;
}