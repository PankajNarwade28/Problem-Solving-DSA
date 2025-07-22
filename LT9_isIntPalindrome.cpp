#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int digit;
    long rev = 0;
    int temp = num;
    if (num < 0)
    {
        return false;
    }
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    // cout << rev << endl;
    if (rev == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout << "Enter an Integer:";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << "The given number is a Palindrome";
    }
    else
    {
        cout << "The given number is Not a Palindrome";
    }
    return 0;
}