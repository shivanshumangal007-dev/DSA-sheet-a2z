#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int findK(vector<int> &nums){
    int l =0, r= nums.size()-1;
    int mid;
    while(l<r){
        mid = l +(r-l)/2;
        if(nums[mid] > nums[r]) l= mid +1;
        else r = mid;
    }
    int k = nums.size() - l;

    return k;
}
int main(){
    vector<int> nums = {5,6,0,1,2,3,4};
    cout<< findK(nums);
    return 0;
}