#include<iostream>
#include<vector>
using namespace std;
int main(){
     int start = 0, end;
     vector<int> nums={5,7,7,8,8,10};
     int target=7;
        if (!nums.empty()) {
            end = nums.size() - 1;
        } else {
            // return {-1, -1};
            cout<<"{-1,-1}";
            return 0;
        }

        bool startFound = false, endFound = false, isFound = false;

        while (!isFound) {
            if (!startFound && start < nums.size() && nums[start] != target) {
                if (start >= end) {
                    // return {-1, -1};
                    cout<<"{-1,-1}";
                     return 0;
                }
                start++;
            } else {
                startFound = true;
            }

            if (!endFound && end >= 0 && nums[end] != target) {
                if (start >= end) {
                    cout<<"{-1,-1}";
                    // return {-1, -1};
                     return 0;
                }
                end--;
            } else {
                endFound = true;
            }

            if (startFound && endFound) {
                isFound = true;
            }
        }

        // return {start, end};
        cout<<"{"<<start<<","<<end<<"}";
         return 0;
}


// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int start=0,end;
//         if(nums.size()!=0){
//             end=nums.size()-1;
//         } else{
//             return {-1,-1};
//         }
//         bool startFound=false,endFound=false,isFound=false;
//         while(!isFound){
//             if(nums[start]!=target && !startFound && start < nums.size() ){
//                 if(start==end){
//                     return {-1,-1};
//                 }
//                 cout<<"Not found start:"<<start<<endl;
//                 start++;
//             }else{
                
//                 cout<<" found start:"<<start<<endl;
//                 startFound=true;
//             }
//             if(nums[end]!=target && !endFound && end>0){
//                 if(start==end){
//                     return {-1,-1};
//                 }
//                 cout<<"Not found end:"<<end<<endl;
//                 end--;
//             }else{
//                 endFound=true;
                
//                 cout<<" found end:"<<end<<endl;
//             }
//             if(startFound && endFound){
//                 isFound=true;
//             }
//         }
//         if(isFound){
//             return {start,end};
//         }else{
//             return {-1,-1};
//         }
//     }
// };

// Optimal solution
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int start = 0, end;
//         if (!nums.empty()) {
//             end = nums.size() - 1;
//         } else {
//             return {-1, -1};
//         }

//         bool startFound = false, endFound = false, isFound = false;

//         while (!isFound) {
//             if (!startFound && start < nums.size() && nums[start] != target) {
//                 if (start >= end) {
//                     return {-1, -1};
//                 }
//                 start++;
//             } else {
//                 startFound = true;
//             }

//             if (!endFound && end >= 0 && nums[end] != target) {
//                 if (start >= end) {
//                     return {-1, -1};
//                 }
//                 end--;
//             } else {
//                 endFound = true;
//             }

//             if (startFound && endFound) {
//                 isFound = true;
//             }
//         }

//         return {start, end};
//     }
// };
