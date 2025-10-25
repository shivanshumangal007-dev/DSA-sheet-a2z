#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;

void bubblesort(vector<int> &arr,int sortedIndex, int isSwap){

    if (sortedIndex == 2 || isSwap == false)
    {
        return;
    }
    isSwap = false;
    int i = 0;
    while( i  < sortedIndex - 1){
        
        if(arr[i] > arr[i+1]){
            isSwap = true;
            swap(arr[i] , arr[i+1]);
        }
        i++;

    }

    bubblesort(arr , --sortedIndex , isSwap);
}

int main(){
    vector<int> arr = {8, 9, 2, 6, 8, 0, 5};
    int size = arr.size();

    bubblesort(arr ,  size ,  true);

    for(auto i : arr){
        cout << i <<" ";
    }
    return 0;
}