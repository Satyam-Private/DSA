#include<bits/stdc++.h> 
using namespace std;

int findFirst(vector<int> arr){
    sort(arr.begin(), arr.end());
    if(arr[0] != arr[1] && arr[0] > 0){
        return arr[0];
    }
    else{
        for(int i = 1; i < arr.size(); i++){
            if(i == arr.size()-1){
                if(arr[i] != arr[i-1] && arr[i] > 0){
                    return arr[i];
                }
                else break;
            }
            if(arr[i] > 0 && arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                return arr[i];
            }
        }

    }
    return -1;

}

int main(){ 
    vector<int> arr = {8 , 8 , 7, -1 , 5 , 5, 2, 2};

    int ans = findFirst(arr); 
    cout<<ans;

    return 0;
}