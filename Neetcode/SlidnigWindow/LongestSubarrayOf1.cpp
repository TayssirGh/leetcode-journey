//
// Created by tayssir on 8/11/25.
//
#include <bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& nums) {
    int left=0, window=0, lastZero = -1;
    for(int right=0;right<nums.size();right++) {
        if (nums[right] == 0) {
            left = lastZero + 1;
            lastZero = right;
        }
        window = max(window, right - left);
    }
    return window;
}
int main() {
    vector<int> nums = {1,1,0,1};
    cout << longestSubarray(nums) << endl;
    return 0;
}