#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> merge(n1 + n2);
    int i1 = 0, i2 = 0;
    int index = 0;
    while (i1 < n1 && i2 < n2)
    {
        if (nums1[i1] <= nums2[i2])
        {
            merge[index] = nums1[i1];
            i1++;
        }
        else
        {
            merge[index] = nums2[i2];
            i2++;
        }
        index++;
    }
    while (i1 < n1)
    {
        merge[index] = nums1[i1];
        index++;
        i1++;
    }
    while (i2 < n2)
    {
        merge[index] = nums2[i2];
        index++;
        i2++;
    }

    int n = merge.size();
    for (int k = 0; k < n; ++k) {
        cout << merge[k];
        if (k + 1 < n) cout << ' ';
    }
    cout << '\n';

    return (n & 1 ? merge[n / 2] : (merge[n / 2] + merge[n / 2 - 1]) / (double)2);
}
int main(){
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3,4};    
    cout << findMedianSortedArrays(nums1, nums2) << endl;   
    return 0;
}