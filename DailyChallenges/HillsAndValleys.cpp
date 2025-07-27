//
// Created by tayssir on 7/27/25.
//
#include <bits/stdc++.h>

using namespace std;

int countHillValley(vector<int>& nums) {
    if(nums.size() <= 2) {
        return 0;
    }
    int left = 0, count = 0;
    for(int i = 1; i < nums.size() -1; i++) {
        if (nums[i] != nums[i+1]) {
            if (nums[i] > nums[i+1] && nums[i] > nums[left] || nums[i] < nums[left] && nums[i] < nums[i+1]) {
                count++;
            }
            left = i;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {2,4,1,1,6,5};
    cout << countHillValley(nums) << "\n";
    return 0;
}

