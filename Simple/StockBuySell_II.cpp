// 122. Best Time to Buy and Sell Stock II
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int maxProfit=0;
    vector<int> prices={7,1,5,3,6,4};
    for(int i=1;i<prices.size();i++){
        if(prices[i-1]<prices[i]){
            maxProfit+=prices[i]-prices[i-1];
        }
    }
    cout<<maxProfit;
    return 0;
}

// leetcode solution
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int maxProfit=0;
//         for (int i = 1; i < prices.size(); i++) {
//             if (prices[i] > prices[i - 1]) {
//                 maxProfit += prices[i] - prices[i - 1];
//             }
//         }
//         return maxProfit;
//     }
// };