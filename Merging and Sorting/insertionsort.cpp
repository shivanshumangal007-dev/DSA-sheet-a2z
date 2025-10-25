#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
void printarray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void insersionSort(vector<int> &arr)
// {
//     int size = arr.size();

//     for (int i = 1; i < size; i++)
//     {
//         while ((arr[i] < arr[i-1]) && i > 0 )
//         {
//             swap(arr[i] , arr[i-1]);
//             i--;
//             // printarray(arr);
//         }
//     }
// }

void insertionSort( vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}

int main()
{
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};
    int size = arr.size();
    printarray(arr);
    insertionSort(arr);
    printarray(arr);

    return 0;
}