#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <=n; i++){
        for(int k = 1; k <= i-1; k++){
            cout<<" ";
        }
        for(int j = i; j <= 2*n - i; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}



int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    pattern(n);
    return 0;
}