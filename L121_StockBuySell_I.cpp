#include<iostream>
#include <climits>
using namespace std;
int main(){
    int prices[6]={7,1,5,3,6,4};
    int minPrice=INT_MAX;
    int maxProfit=0; 
    bool isSell=false;
    for(int i=0;i<6;i++){
        minPrice=min(prices[i],minPrice);
        maxProfit=min(maxProfit,prices[i]-minPrice);
    }

    cout<<minPrice<<"   :  "<<maxProfit;
    return 0;
}