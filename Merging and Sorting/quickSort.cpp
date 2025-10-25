#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
// int partition(vector<int> &arr, int s, int e){
//     int pivot = arr[s];
//     int cnt=0;
//     for(int i = s+1; i<=e ;i++){
//         if(arr[i] < pivot){
//             cnt++;
//         }
//     };

//     swap(arr[s] , arr[s+cnt]);
//     int p = s+cnt;
//     //sorting left and right part
//     int i = 0;
//     int j = e;

//     while(i < p && j > p){
//         while(arr[i] < pivot) {
//             i++;
//         }

//         while(arr[j] > pivot) {
//             j--;
//         }

//         swap(arr[i], arr[j]);

//         //just for checking code

//         // for (auto i : arr)
//         // {
//         //     cout << i << " ";
//         // }
//         // cout << endl;
//     }

//     return p;
// }

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s]; // Choose the first element as the pivot
    int i = s + 1;
    for (int j = s + 1; j <= e; j++)
    {
        // If the current element is smaller than the pivot, swap it
        // with the element at index i, and increment i.
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    // Swap the pivot with the element at index i - 1 to place it in its correct sorted position.
    swap(arr[s], arr[i - 1]);
    return i - 1; // Return the pivot's new index
}
void quickSort(vector<int> &arr , int s , int e){
    if(s>=e) return;

    int p = partition(arr, s ,e);


    //left part
    quickSort(arr, s, p-1);

    //right part
    quickSort(arr, p+1 , e);
}
int main(){
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};
    int size = arr.size(); // 7

    quickSort(arr, 0 ,size - 1);
    for(auto i : arr){
        cout<< i <<" ";

    }
    cout<< endl;
    // printarray(arr);
    // selectionsort(arr, size);
    // printarray(arr);
    return 0;
}