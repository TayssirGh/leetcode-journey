//
// Created by tayssir on 7/30/25.
//
#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
    if (nums[high]< target) {
        return high+1;
    }
    if (nums[low]> target) {
        return low;
    }
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return high;
}
int main() {
    vector<int> nums = {1,3,5,6};
    cout << searchInsert(nums, 7) << "\n";
    return 0;
}
