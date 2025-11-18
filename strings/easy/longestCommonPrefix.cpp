#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string comm = strs[0];

    int commIndex = 0;
    // int currIndex = commIndex;
    for (int i = 0; i < strs.size(); i++)
    {
        string str = strs[i];
        if (str == comm)
        {
            continue;
        }
        while (commIndex < comm.length() && str[commIndex] == comm[commIndex])
        {
            commIndex++;
        }
        comm = comm.substr(0, commIndex);
        commIndex = 0;
    }

    return comm;
}
int main(){
    
    return 0;
}