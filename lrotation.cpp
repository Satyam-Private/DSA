#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
void rotate(vector<int> &arr , int size){
    int temp;
    temp = arr[0];
    for(int i = 1; i < size;i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;
}

int main(){
    vector<int> arr;
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    int ele;
    for(int i = 0; i < size; i++){
        cout<<"enter element to insert in array : ";
        cin>>ele;
        arr.push_back(ele);
    }
    print(arr);
    rotate(arr , size);
    cout<<endl;
    print(arr);
    return 0;
}