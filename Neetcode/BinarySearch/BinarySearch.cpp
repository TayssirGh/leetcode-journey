//
// Created by tayssir on 8/4/25.
//
#include <bits/stdc++.h>

using namespace std;
int search(vector<int>& nums, int target) {
    int high = nums.size() - 1;
    int low = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    cout << search(nums, 12) << "\n";
    return 0;
}
