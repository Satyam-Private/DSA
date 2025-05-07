#include<bits/stdc++.h>
using namespace std;

int RevNum(int n){
    int rev = 0; 
    while(n > 0){
        int last_digit = n % 10; 
        n = n / 10;
        rev = rev * 10 + last_digit;
    }
    return rev;
}

int main(){
    int n; 
    cout<<"enter the number: ";
    cin>>n;
    int rev = RevNum(n);
    cout<<"The reverse of the number is: "<<rev<<endl;
    return 0;
}