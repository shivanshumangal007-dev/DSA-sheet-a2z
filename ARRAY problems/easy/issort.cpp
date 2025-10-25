#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
bool isSort(int *arr, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {2, 5, 6, 7};

    cout << isSort(arr, 4);
    return 0;
}