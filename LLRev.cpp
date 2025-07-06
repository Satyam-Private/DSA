#include<bits/stdc++.h>
using namespace std; 

class Node
{
public:
   int data; 
   Node* next; 

   Node(int data , Node* next){
   this ->  data = data;
    this -> next = next; 

   }

   Node(int data){
    this -> data = data; 
   this ->  next = nullptr;
   }
};

Node* arrToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
     Node* temp = head;
    for(int i = 1 ; i < arr.size(); i++){
       
        Node* newNode = new Node(arr[i]);
        temp -> next = newNode; 
        temp = newNode;
} 
return head;

}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data;
        temp = temp -> next;
    }
   
}



int main(){
    vector<int> arr = {1 , 2 , 5, 6, 9};
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i] << " ";
    }
    Node*head = arrToLL(arr);
    print(head);


}