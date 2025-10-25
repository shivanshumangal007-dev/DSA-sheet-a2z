#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> temp;
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int st = 0;
        int en = n - 1;
        while (st < en)
        {
            swap(matrix[i][st], matrix[i][en]);
            st++;
            en--;
        }
    }
}
void printing2Darray(vector<vector<int>> &matrix)
{
    for(int i = 0;i< matrix.size() ; i++){
        for (int j = 0; j < matrix.size(); j++)
        {
            cout<< matrix[i][j] << " ";
        }
        cout<< endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printing2Darray(matrix);
    rotate(matrix);

    // printing again
    printing2Darray(matrix);
    return 0;
}