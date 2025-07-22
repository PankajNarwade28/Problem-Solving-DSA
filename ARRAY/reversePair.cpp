#include <iostream>
using namespace std;
int main()
{
    int num[] = {92, 22, 223, 21, -33, 44, 111, 000};
    int size = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < size; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            int x = num[i - 1];
            num[i - 1] = num[i];
            num[i] = x;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}