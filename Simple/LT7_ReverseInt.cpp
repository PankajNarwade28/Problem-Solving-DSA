#include <iostream>
using namespace std;
int main()
{
    int n = 123, sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if ((sum < INT32_MIN) || (sum > INT32_MAX))
        {
            cout << "Fault";
            return 0;
        }
        sum = sum * 10 + digit;
        n = n / 10;
    }
    if (n < 0)
    {
        cout << -1 * sum;
    }
    else
    {
        cout << sum;
    }
    return 0;
}