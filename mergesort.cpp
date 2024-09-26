#include<bits/stdc++.h>
using namespace std;
void mergesort(vector<int> &arr , int low , int mid  , int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

    


void merge(vector<int> &arr , int low , int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    merge(arr , low , mid);
    merge(arr, mid +1, high);
    mergesort(arr, low , mid , high);
}

int main(){
    int size; 
    cout<<"enter the size of the array";
    cin>>size;
    vector<int> arr;
    int a;
    for(int i = 0; i <size ; i++){
        cin>>a;
        arr.push_back(a);
    }
    int low = 0; 
    int high = size -1;
    merge(arr, low , high);
     for (int i = 0; i < size; i++) {
        cout << arr[i] << " "  ;
    }
    return 0;
}