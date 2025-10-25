#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    vector<int> ans;
    // rows and collumn

    int firstrow = 0;
    int firstcol = 0;
    int lastrow = row - 1;
    int lastcol = col - 1;

    while (count < total)
    {
        for (int i = firstcol; count < total && i <= lastcol; i++)
        {
            ans.push_back(matrix[firstrow][i]);
            count++;
        }
        firstrow++;
        for (int i = firstrow; count < total && i <= lastrow; i++)
        {
            ans.push_back(matrix[i][lastcol]);
            count++;
        }
        lastcol--;
        for (int i = lastcol; count < total && i >= firstcol; i--)
        {
            ans.push_back(matrix[lastrow][i]);
            count++;
        }
        lastrow--;
        for (int i = lastrow; count < total && i >= firstrow; i--)
        {
            ans.push_back(matrix[i][firstcol]);
            count++;
        }
        firstcol++;
    }

    return ans;
}
int main()
{

    return 0;
}