#include<iostream>
using namespace std;
int LinearS(int size, int arr[], int target){
    for(int i = 0; i < size ; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int size; 
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements one by one ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int target; 
    cout<<"enter a target value to search ";
    cin>>target;
    int ans = LinearS(size , arr , target);
    cout<<"the value is at index "<<ans;
    return 0;
}