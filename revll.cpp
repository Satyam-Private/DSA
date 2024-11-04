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
    }

};

Node* arrtoll(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        cout<<" "<<temp->data;
        mover = temp;
        cnt++;
        
    }
    cout<<endl<<"the number of nodes are : "<<cnt<<endl;
    return head;
    
    
    
}
int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    vector<int> arr;
    cout<<"enter the array elemenst one by one  "<<endl;
    for(int i = 0; i < size; i++){
        int ele; 
        cout<<"enter the element : "<<endl;
        cin>>ele;
        arr.push_back(ele);
    }
    Node* ans = arrtoll(arr);
    cout<<endl<<"the first element is  : "<<ans ->data;
    
    

    return 0;
}