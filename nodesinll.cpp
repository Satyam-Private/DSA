#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        cout<<"the data is "<<data<<endl;
        cout<<"the value of next is "<<next<<endl;
    }
};

int main(){
    Node* head = new Node(2);
    cout<<"the value of the head is "<<head<<endl;
    cout<<"the data in head is "<<head->data;

    return 0;
}