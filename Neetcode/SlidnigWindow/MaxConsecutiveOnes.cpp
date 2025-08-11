//
// Created by tayssir on 8/11/25.
//
#include <bits/stdc++.h>
using namespace std;
int longestOnesIII(vector<int>& nums, int k) { // This is the implementation of slliding window, but , beats only 23% 😕
    int left = 0, maxOnes = 0, zeros = 0;
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] == 0) {
            zeros++;
        }
        if (zeros > k) {
            if (nums[left] == 0) {
                zeros --;
            }
            left++;
        }
        maxOnes = max(maxOnes, left - right + 1);
    }
    return maxOnes;

}
int leetcodeSolution(vector<int>& nums, int k) { //beats 100%
    int left = 0, maxLength = 0, zeroCount = 0;

    for (int right = 0; right < nums.size(); ++right) {
        if (nums[right] == 0) {
            zeroCount++;
        }
        while (zeroCount > k) {
            if (nums[left] == 0) {
                zeroCount--;
            }
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;

}
int main() {
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    cout << leetcodeSolution(nums, 3) << endl;
    return 0;
}