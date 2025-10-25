#include <iostream>

using namespace std;
bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n = 66;

    if (checkPrime(n))
    {
        cout << " this is the prime no." << endl;
    }

    else
    {
        cout << " this is not the prime no." << endl;
    }
    return 0;
}