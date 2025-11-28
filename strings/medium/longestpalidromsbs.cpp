#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;

// most optimised way of doing it is marchells algorithm but that  is not needed thi sis enough for initial phase
string longestPalindrome(string s)
{
    int maxLen = 0;
    string ans = "";
    auto expand = [&](int left, int right)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            string subs = s.substr(left, right - left + 1);
            if (subs.length() > maxLen)
            {
                maxLen = subs.length();
                ans = subs;
            }
            left--;
            right++;
        }
    };
    if (s.length() < 2)
        return s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        expand(i, i);
        expand(i, i + 1);
    }
    return ans;
}
int main(){
    
    return 0;
}