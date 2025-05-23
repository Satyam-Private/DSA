#include<bits/stdc++.h>
using namespace std;

int totalMoney(int num){
    int total = 0;
    while(num >= 0){
        total = total + num;
        num--;
    }
    return total;
}

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int ans = totalMoney(num);
    cout<<"the total money is "<<ans;
}