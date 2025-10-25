#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;

void insertionSort(vector<int> &arr , int i ,int size){

    if(i > size-1){
        return ; 
    }
    int j  = i - 1;
    int temp = arr[i];
    for(; j>= 0 ; j--){
        if(arr[j] > temp){
            arr[j+1] =  arr[j];
        }
        else{
            break;
        }
    }


    arr[j+1] = temp;

    //for checking purpose
    // cout<< i << " . "<< endl;
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout<< endl;

    insertionSort(arr , i+1 , size);


}

int main(){
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};
    int size = arr.size();

    insertionSort(arr, 1 , arr.size());

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}