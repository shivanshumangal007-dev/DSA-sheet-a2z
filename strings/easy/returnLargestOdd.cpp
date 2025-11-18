#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
//mine 3ms
string largestOddNumber1(string s)
{
    long long int maxi = 0;
    int i = s.length() - 1;
    int ele = s[i] - 48;
    while ((!(ele & 1)) && (i >= 0))
    {
        i--;
        if (i >= 0)
        {
            ele = s[i] - 48;
        }
    }
    if (i >= 0)
    {
        return s.substr(0, i + 1);
    }
    return "";
}
// leetcode 0ms
string largestOddNumber(string num)
{
    int n = num.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = num[i] - '0';
        if (digit % 2 == 1)
            return num;
        else
        {
            num.pop_back();
            ;
        }
    }
    return "";
}
int main(){
    
    return 0;
}