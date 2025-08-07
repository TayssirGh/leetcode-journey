//
// Created by tayssir on 8/7/25.
//
#include <bits/stdc++.h>

using namespace std;
vector<int> moveZeroes(vector<int>& nums) { // This is not 2p, and it is 13 ms beats only 10%
    int left = 0;
    int count = 0;
    while (left  < nums.size()) {
        if (nums[left] == 0) {
            count++;
            nums.erase(nums.begin() + left);
        }
        else {
            left++;
        }
    }
    for (int i = 0 ; i <count; i++) {
        nums.push_back(0);
    }
    return nums;
}
void leetcodeSolution(vector<int>& nums) {
    int left = 0;
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}
int main() {
    vector<int> nums = {0,0,0,0,0,0,1,1,1};
    vector<int> res = moveZeroes(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}