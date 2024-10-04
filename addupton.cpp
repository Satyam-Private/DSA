#include<bits/stdc++.h>
using namespace std;

void sum(int num , int addition){
    if(num < 1){
        cout<<addition;
        return;
    }
    else{
        sum(num-1 , addition + num);
    }
}
int main(){
    int num;
    cout<<"enter a number upto which you want to sum";
    cin>>num;
    cout<<"the sum is "; 
    sum(num , 0);
}