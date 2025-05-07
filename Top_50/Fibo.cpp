#include<bits/stdc++.h>
using namespace std;
int fiboNum(int n){
    if(n <= 1) return n;
    return fiboNum(n - 1) + fiboNum(n - 2);
}

void fiboSeries(int n){
    vector<int> series;
    for(int i = 0; i <=n; i++){
        if(i <= 1){
            series.push_back(i);
        }
       else series.push_back(series[i-1] + series[i-2]);
    }
    for(auto it : series){
        cout<<it<<" ";
    }
}

int main(){
    int n; 
    cout<<"enter the number upto which you want fibonacci series: ";
    cin>>n;
    // Method 1
    // int ans = fiboNum(n);
    // cout<<"The fibonacci Number is: "<<ans<<endl;
    // cout<<"The fibonnacci series is : ";
    // for(int i = 0; i <= n; i++){
    //     cout<<fiboNum(i)<<" ";
    // }
    // Method 2
    fiboSeries(n);
}