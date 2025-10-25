#include <iostream>

using namespace std;

int getFubbiByIndex(int index, int first = 0, int second = 1, int currIN = 3)
{
    if (index == 0)
    {
        return 0;
    }
    if (currIN >= index)
    {
        return first + second;
    }
    if (index == 1)
    {
        return first;
    }
    if (index == 2)
    {
        return second;
    }
    getFubbiByIndex(index, second, first + second, ++currIN);
}
int main()
{
    cout << " pls enter the index : " << endl;
    int n;
    cin >> n;

    cout << " the no. at the given index is : " << getFubbiByIndex(n);

    return 0;
}