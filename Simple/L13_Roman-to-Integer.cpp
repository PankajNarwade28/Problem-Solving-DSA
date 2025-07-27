#include<iostream>
#include<string>
using namespace std;

int checkChar(char ch) {
    if (ch == 'I') return 1;
    else if (ch == 'V') return 5;
    else if (ch == 'X') return 10;
    else if (ch == 'L') return 50;
    else if (ch == 'C') return 100;
    else if (ch == 'D') return 500;
    else if (ch == 'M') return 1000;
    else return 0;
}
int main(){
    string str="MCMXCIV";
    int ans=0;
      for (int i = 0; i < str.length(); i++) {
        if(checkChar(str[i+1])>checkChar(str[i])){
            ans+= checkChar(str[i+1])-checkChar(str[i]);
            i++;
        }else{
            ans+= checkChar(str[i]);
        }
    }
    cout<<ans;

    return 0;
}

// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000