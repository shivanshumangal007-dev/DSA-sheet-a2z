#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>
#include<string>

using namespace std;
bool rotateString(string s, string goal)
{
    if (s == goal)
        return true;
    else if (s.length() != goal.length())
        return false;
    string dbls = s + s;
    if (dbls.find(goal) != string::npos)
        return true;
    return false;
}
int main(){

    return 0;
}