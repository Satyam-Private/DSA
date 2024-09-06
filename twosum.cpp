#include<iostream>
using namespace std;
void twosum(int size, int arr[], int target){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j<size ; j++){
            if(arr[i] + arr[j] == target){
                cout<<i<<endl<<j;
            }
        }
    }
}
int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements one by one ";
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter a target";
    cin>>target;
    twosum(size , arr, target);
}