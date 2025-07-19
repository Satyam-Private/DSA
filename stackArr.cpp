#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int* arr;
public:
    Stack(){
        top = -1;
        size = 1000;
        arr = new int(size);
    }
    void push(int element){
        top++;
        arr[top] = element;
    }
    void pop(){
        top--;
    }
    int peek(){
        int element = arr[top];
        return element;
    }
    
};



int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.peek();

    return 0;
}