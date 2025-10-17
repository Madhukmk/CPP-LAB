#include <iostream>
using namespace std;

int is_prime(int n)
{
    if (n < 2)
        return 0;
    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int a, b;
    cout << "Enter the range a and b: ";
    cin >> a >> b;

    cout << "Prime numbers between " << a << " and " << b << " are: ";

    for (int i = a; i <= b; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}

