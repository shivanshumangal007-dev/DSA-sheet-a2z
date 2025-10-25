#include <iostream>
#include <string>

using namespace std;
bool stringCheck(string s, int size, int str, int end)
{
    if (str >= end)
    {
        return true;
    }

    if (s[str] != s[end])
    {
        return false;
    }

    stringCheck(s, size, ++str, --end);
}
int main()
{

    string s;
    cout << "give a string : ";
    cin >> s;
    int size = s.length();

    if (stringCheck(s, size, 0, size - 1))
    {
        cout << " yes the string is palidrom" << endl;
    }
    else
    {
        cout << " the string is not paidrom";
    }

    return 0;
}