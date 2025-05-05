#include<bits/stdc++.h> 
using namespace std;
void pushToStack(stack<int> &st, int x){
    st.push(x);

} 

int main(){
    stack<int> st; 
    pushToStack(st , 10);
    pushToStack(st , 20);
    pushToStack(st , 30);
    pushToStack(st , 40);
    pushToStack(st , 50);
    pushToStack(st , 60);
    pushToStack(st , 70);
    pushToStack(st , 80);

    cout<<st.top()<<endl;
    // to know the size of the stack we can do, 
    cout<<st.size();
    cout<<endl;
    // to clear all stack, 
    st.empty();
    cout<<st.size();

    // to pop the top element of the stack,
    st.pop();
    cout<<st.top()<<endl;
    
}