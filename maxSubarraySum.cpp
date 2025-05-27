#include<bits/stdc++.h>
using namespace std; 

int maxSum(vector<int> nums ,  int k){
    int max_sum = 0 , sum = 0 , start = 0;
    int end = start + k -1;
    while(end <= nums.size() - 1){
        for(int i = start; i <= end; i++){
        sum += nums[i];
    }
    start++;
    end++;
    max_sum = max(sum  , max_sum);
    sum = 0;
    }
    return max_sum;

}


int main(){
    vector<int> nums = {1,5,4,2,9,9,9};
    int k;
    cout<<"enter the window size";
    cin>>k;
    int ans = maxSum(nums, k);
    cout<<endl<<ans;
}