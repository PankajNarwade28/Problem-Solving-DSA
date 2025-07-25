#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={3,1,2,7,11,8};
    for(int i=0;i<6;i+=2){
        if(i+1<6){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// void reverseEveryPair(int arr[], int n) {
    // for (int i = 0; i < n - 1; i += 2) {
        // Swap arr[i] and arr[i+1]
        // swap(arr[i],arr[i+1])
        // int temp = arr[i];
        // arr[i] = arr[i + 1];
        // arr[i + 1] = temp;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     reverseEveryPair(arr, n);

//     cout << "Modified array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }