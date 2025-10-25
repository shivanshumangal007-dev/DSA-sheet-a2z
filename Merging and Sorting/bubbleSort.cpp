#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
void bubbleSort(vector<int> &arr)
{
    // code here
    int q = arr.size() - 1;
    // loop will run for n-1 times
    for (int i = q; i > 0; i--)
    {
        bool isswap = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }

        if (!isswap)
        {
            break;
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
int main(){
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};
    int size = arr.size();
    printarray(arr);
    bubbleSort(arr);
    printarray(arr);

    return 0;
}