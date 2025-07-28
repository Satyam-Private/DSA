#include<bits/stdc++.h>
using namespace std;

int fact(int element){
    if(element == 1 || element == 0){
        return 1;
    }
    return element*fact(element-1);

}


int main(){
    int element;
    cout<<"enter a number : "; 
    cin>>element;
    int ans = fact(element);
    cout<<"the answer is "<<ans;
}