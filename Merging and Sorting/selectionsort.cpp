#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>

using namespace std;

void selectionsort(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int mini = arr[i];
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void printarray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};
    int size = arr.size();
    printarray(arr);
    selectionsort(arr, size);
    printarray(arr);

    return 0;
}