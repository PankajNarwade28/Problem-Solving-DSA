// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.


#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="sadbutsad";
    string search="sad";
    bool flag=true;
    for(char ch : str){
         int i=0;
         cout<<str[i]<<endl;
         while(i<search.length()){
            if(search[i]!=str[i]){
                flag=false;
                
                i++;
            }cout<<search[i]<<" : "<<str[i]<<endl;
         }
    }

    cout<<flag;
    return 0;
}