#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = n1 + n2;

        vector<int> res(n3);

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

        sort(res.begin(), res.end());

        if (n3 % 2 == 0)
        {
            return (res[n3 / 2 - 1] + res[n3 / 2]) / 2.0;
        }
        else
        {
            return res[n3 / 2];
        }
    }
};
