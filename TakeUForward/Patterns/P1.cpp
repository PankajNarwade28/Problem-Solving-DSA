#include<iostream>
#include<string>
using namespace std;

void pattern1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern3(){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(){
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern6(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(){
    for(int i=1;i<=5;i++){
        for(int j=4;j>=i;j--){
            cout<<"  ";
        }
        for(int l=1;l<i*2;l++){
            cout<<"* ";
        }        
        cout<<endl;
    }
}

void pattern8(){
    for(int i=5;i>0;i--){
        for(int j=5;j>i;j--){
            cout<<"  ";
        }
        for(int l=i*2;l>1;l--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern9(){
   pattern7();
   pattern8();
}

void pattern10(){
    for(int i=1;i<10;i++){
        int stars=i;
        if(i>5){
            stars=10-i;
        }
        for(int j=1;j<=stars;j++){ 
             cout<<"* "<<ends;
        }
        cout<<endl;
    }
}

void pattern11(){
    int l=0,m=1;
    for(int i=1;i<=5;i++){
         if(i%2!=0){ l=0;m=1;}
         for(int j=1;j<=i;j++){ 
            cout<<l*m+m<<" ";
            int k=l;
            l=k*m+m;
            m=k;
          }
        cout<<endl;
    }
}

void pattern12(){
    int p=6;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        for(int k=0;k<p;k++){
            cout<<"  ";
        }
        for(int l=i;l>=0;l--){
            cout<<"* ";
        }
        cout<<endl;
        p-=2;
    }
}

void pattern13(){
    int p=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<p++<<" ";
        }
        cout<<endl;
    }
}

void pattern14(){
    string str="ABCDE";
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    }
}

void pattern15(){
    string str="ABCDE";
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<str[j];
        }
        cout<<endl;
    }
}

void pattern16(){
    string str="ABCDE";
    for(int i=4;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int k=0;k<=4-i;k++){
            cout<<str[k]<<" ";
        }
        for(int l=4-i-1;l>=0;l--){
            cout<<str[l]<<" ";
        }
        cout<<endl;
    }
}

void pattern17(){
    string str="ABCDE";
    for(int i=4;i>0;i--){
        for(int l=i;l<5;l++){
            cout<<str[l]<<" ";
        }
        cout<<endl;
    }
}

void pattern18(){
     for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<"* ";
        }
        for(int j=0;j<i*2;j++){
            cout<<"  ";
        }
        for(int j=5;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
     }  
}

void pattern19(){
     for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        for(int j=8;j>i*2;j--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
     }  
}

void pattern20(){
    pattern18();
    pattern19();
}

void pattern21(){
    int p=2;
     for(int i=1;i<10;i++){
        int stars=i;
        if(i>5){
            stars=i-p;
            p+=2;
        }
        for(int j=0;j<stars;j++){
            cout<<"* ";
             
        }
        cout<<endl;
     }
}

void pattern22(){
    int p=2;
     for(int i=1;i<10;i++){
        int stars=i;
        if(i>5){
            stars=i-p;
            p+=2;
        }
        for(int j=0;j<stars;j++){
            cout<<"* ";
             
        }
        for(int k=0;k<10-stars*2;k++){
            cout<<"- ";
        }
        for(int j=0;j<stars;j++){
            cout<<"* ";
             
        }
        cout<<endl;
     } 
}

void pattern23(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if((j==1 || j==4) || (i==1|| i==4)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }
}
int main(){
    // cout<<"Hello World!";
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern12();
    // pattern13();
    // pattern14();
    // pattern15();
    // pattern16();
    // pattern17();
    // pattern18();
    // pattern19();
    // pattern20();
    // pattern21();
    // pattern22();
    pattern23();
    return 0;
}