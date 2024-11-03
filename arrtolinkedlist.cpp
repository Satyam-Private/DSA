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

Node* arrtoll(vector <int> arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i = 0; i < arr.size() - 1;i++){
    Node* temp = new Node(arr[i]);
    mover -> next = temp;
    mover = temp;
  }
  return head;
}


int main(){
  int size;
  cout<<"enter the size of the array : ";
  cin>>size;
  vector <int> arr;
  for(int i = 0; i < size; i++){
    int ele;
    cout<<"enter element : ";
    cin>>ele;
    arr.push_back(ele);
  }

  Node* ans = arrtoll(arr);
  cout<<"first element of linked list is : "<<ans->data;
  return 0;
}