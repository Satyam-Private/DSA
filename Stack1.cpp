#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top = -1;
    
   
    vector<int> st;
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
    int Push(int ele){
        st.push_back(ele);
        top++;
    }
    int Pop(){
        top--;
    }
    int look_up(){
        return st[top];
    }
};


int main(){
    Stack st;
    st.Push(4);
    bool ans = st.isEmpty();
    cout<<ans<<endl;
    int top = st.look_up();
    cout<<"The top element is "<<top<<endl;
    st.Push(10);
    st.Push(13);
    top = st.look_up();
    cout<<"The top element is "<<top<<endl;
    st.Pop();
    top = st.look_up();
    cout<<"The top element is "<<top;
}