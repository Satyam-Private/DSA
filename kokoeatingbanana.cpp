#include<bits/stdc++.h>
using namespace std;
int highestinarr(vector<int> arr){
    int maxi = arr[0];
    for(int i = 1; i <arr.size();i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int reqtimefunc(int mid  , vector<int> arr){
    int total_hours = 0;
    for(int i = 0; i < arr.size(); i++){
        total_hours += ceil(double(arr[i]) / double(mid));
    }
    return total_hours;
}


int func(vector<int> arr , int h){
    int ans;
    int low = 1;
    int high = highestinarr(arr);
    while (low <= high)
    {
        int mid = (low + high)/2;
        int reqtime = reqtimefunc(mid , arr);
        if(reqtime <= h){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
    
}

int main(){
    int size , h = 8;
    cout<<" enter maximum hours : ";
    cin>>h;
    cout<<"enter number of tiles : ";
    cin>>size;
    cout<<endl<<"enter the bananas in each tile one by one : ";
    vector<int> arr;
    for(int i = 0; i < size; i++){
        int tile;
        cin>>tile;
        arr.push_back(tile);
    }
    int ans = func(arr , h);
    cout<<endl<<"the ans is : "<<ans;
}