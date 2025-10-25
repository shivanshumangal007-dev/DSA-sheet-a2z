#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int singleNumber(vector<int>& nums) {
        int result = 0;

        for(auto i : nums){
            result = result ^ i;
        }
        return result;
        
    }
int main(){
    vector<int> nums = {2,2,3,4,4,5,5,6,6}; //ans = 3
    return 0;
}