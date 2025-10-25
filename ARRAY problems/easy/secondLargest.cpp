#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;

int secondlaregst(int *arr , int size){
    int largest = 0;
    int Seclargest = 0;

    for(int i = 0; i < size ; i++){
        if(arr[i] > largest){
            Seclargest = largest;
            largest = arr[i];
        }

    }

    return Seclargest;
}
int main(){
    
    int arr[] = {2 ,5 ,6,7,2,67 ,80 ,89};

    int sec = secondlaregst(arr , 8);

    cout<< sec;
    return 0;
}