#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <unordered_set>

using namespace std;

vector<int> findUnion(vector<int> num1, vector<int> num2)
{
    unordered_set<int> temp;
    for (auto num : num1)
    {
        temp.insert(num);
    }
    for (auto num : num2)
    {
        temp.insert(num);
    }

    vector<int> ans(temp.begin(), temp.end());
    return ans;
}
int main()
{
    vector<int> num1 = {1, 2, 3, 5, 6, 7, 89};
    vector<int> num2 = {1, 23, 3, 6, 72, 89};
    vector<int> ans = findUnion(num1, num2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i] <<" ";
    }
    // cout<< ans.size();
    cout<<endl;
    return 0;
}