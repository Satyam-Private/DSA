#include<bits/stdc++.h>
using namespace std;

int fibo(int num , vector<int>& memo){
    if(num<=1){
        return num;
    }
    if(memo[num] != -1){
        return memo[num];
    }
    memo[num] = fibo(num-1 , memo) + fibo(num-2,memo);
    return memo[num];
}

int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    vector <int> memo(num + 1, -1);
    
    int ans = fibo(num , memo );
    cout<<"the ans is "<<ans;
}