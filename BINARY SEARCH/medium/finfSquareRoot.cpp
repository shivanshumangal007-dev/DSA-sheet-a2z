#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int findSQroot(int n)
{

    int st = 0, end = n, ans = 0;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        long long int elementSQ = mid * mid;

        if (elementSQ <= n)
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << " enter the no. u want SQ. root of: ";
    cin >> n;

    cout << "the sq root of given no. is :" << findSQroot(n);
    return 0;
}