#include<bits/stdc++.h>
using namespace std;
int bsearch(int size , vector <int> arr , int target , int low , int high){
    while (low <= high)
    
    {
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else high = mid-1;
    }
    
}


int main(){
    int size , target;
    cout<<"enter the size of the array";
    cin>>size;
    vector <int> arr;
    cout<<"enter the array elements one by one";
    for(int i = 0; i < size ; i++){
        int element;
        cout<<"enter the element: ";
        cin>>element;
        arr.push_back(element);
    }
    int low = 0; 
    int high = size -1;
    cout<<"enter the target element : ";
    cin>>target;
    int ans = bsearch(size , arr , target , low , high);
    cout<<"the index is "<<ans;
    return 0;
}