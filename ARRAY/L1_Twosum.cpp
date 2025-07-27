#include <iostream>
using namespace std;
int main()
{
    int result[] = {};
    // int nums[10] = {2, 7, 8, 6, 4}, target = 9;
    // int nums[10] = {3, 2, 4}, target = 6;
    int nums[10] = {3, 3}, target = 6;
    int size = 2;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << " " << j;
                break;
            }
        }
    }
    return 0;
}

// Leetcode Answer : class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> result;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     result.push_back(i);
//                     result.push_back(j);
//                     return result;
//                 }
//             }
//         }

//         return result;
//     }
// };