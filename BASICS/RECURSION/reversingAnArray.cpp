#include <iostream>

using namespace std;
void arrayReverse(int *arr, int str, int end)
{
    if (str >= end)
    {
        return;
    }

    swap(arr[str], arr[end]);

    arrayReverse(arr, ++str, --end);
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8};

    printArray(arr, 6);

    arrayReverse(arr, 0, 5);
    printArray(arr, 6);
    return 0;
}