#include<iostream>
using namespace std;

void printfibo(int num){
    int fibo[num + 2];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= num; i++){
        fibo[i] = fibo[i - 1] + fibo[i -2];

    }

    cout<<" here is the whole fibo series upto given number : ";
    for(int i = 0; i <= num; i++){
        cout<<" "<<fibo[i];
    }
}

int main(){
    int num;
    cout<<"enter the number upto which you want to print fibo series : ";
    cin>>num;
    printfibo(num);
    return 0;
}