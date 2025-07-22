#include <iostream>
using namespace std;
int Leet_1281_sol(int n)
{
    int product = 1, sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }

    return product - sum;
}

int main()
{
    cout << "Result:" << Leet_1281_sol(243) << endl;
    cout << "Result:" << Leet_1281_sol(1241);
    return 0;
}