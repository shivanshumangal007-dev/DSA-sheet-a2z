#include <iostream>

using namespace std;
int factorial(int N, int i = 1, int pro = 1)
{
    if (i == N)
    {
        return pro;
    }
    i++;
    factorial(N, i, pro * i);
}
int main()
{
    cout << "enter the no. u want factorial of : " << endl;
    int n;
    cin >> n;

    cout << endl
         << "the factorial of " << n << " is : " << factorial(n);
    return 0;
}