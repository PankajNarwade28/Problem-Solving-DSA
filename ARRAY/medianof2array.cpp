#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main()
{
    int nums1[] = {1, 3};
    int nums2[] = {2};

    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int n3 = n1 + n2;

    int res[n3];

    int i = 0, j = 0, k = 0;
    while (i < n1)
    {
        res[k] = nums1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        res[k] = nums2[j];
        k++;
        j++;
    }

    sort(res, res + n3);

    double median;
    if (n3 % 2 == 0)
    {
        median = (res[n3 / 2 - 1] + res[n3 / 2]) / 2.0;
    }
    else
    {
        median = res[n3 / 2];
    }

    cout << "Merged and sorted array: ";
    for (int i = 0; i < n3; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    cout << "Median: " << median << endl;

    return 0;
}
