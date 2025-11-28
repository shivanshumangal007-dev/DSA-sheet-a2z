#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int atMost(string &s, int k)
{
    vector<int> freq(26, 0);
    int left = 0, count = 0, distinct = 0;

    for (int right = 0; right < s.length(); right++)
    {
        if (freq[s[right] - 'a'] == 0)
            distinct++;
        freq[s[right] - 'a']++;

        while (distinct > k)
        {
            freq[s[left] - 'a']--;
            if (freq[s[left] - 'a'] == 0)
                distinct--;
            left++;
        }

        count += (right - left + 1);
    }
    return count;
}

int countExactlyK(string s, int k)
{
    return atMost(s, k) - atMost(s, k - 1);
}

int main()
{
    string s = "pqpqs";
    int k = 2;
    cout << countExactlyK(s, k);
}
