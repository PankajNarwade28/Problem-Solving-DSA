#include<iostream>
using namespace std;
int main(){

    int num=3242343;
    int rev=0;
    while(num!=0){
        int n=num%10;
        rev=rev*10+n;
        num/=10;
    }
    cout<<rev;
}

//Simple Program to Reverse a Integer Number