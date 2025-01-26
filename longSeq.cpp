#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestSuccessiveSequence(vector<int>& nums) {
    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Initialize variables
    int max_len = 1;  // The minimum possible length of a successive sequence
    int current_len = 1;

    // Step 3: Iterate through the array
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1] + 1) {  // If current element is consecutive to the previous
            current_len++;
        } else if (nums[i] != nums[i - 1]) {  // If current element is not the same as previous (handle duplicates)
            max_len = max(max_len, current_len);  // Update max length
            current_len = 1;  // Start a new sequence
        }
    }

    // Final check for the last sequence
    max_len = max(max_len, current_len);

    return max_len;
}

int main() {
    // Example usage:
    vector<int> nums = {5, 8, 3, 2, 1, 4};
    cout << "Longest successive sequence length: " << longestSuccessiveSequence(nums) << endl;

    return 0;
}
