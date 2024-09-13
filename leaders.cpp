#include<bits/stdc++.h>
using namespace std;
vector<int> leaders (int size , int arr[]){
    vector <int> ans;
   int max = INT_MIN;
   for(int i = size -1 ; i >= 0; i++){
    if(arr[i] > max){
        max = arr[i];
        ans.push_back(max);
    }
   }
   return ans;
}
int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements one by one";
    for(int i = 0; i<size;i++){
        cin>>arr[i];
    }
    vector<int> ans = leaders(size , arr);
     for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}