//
// Created by tayssir on 8/6/25.
//
#include <bits/stdc++.h>

using namespace std;
// even though this was a cool o(n) it runs in 3ms beats only 37% 😿 ( but memory beats 94% 🦾 )
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> res(nums.size(), 1);
    int left = 1, right = 1;
    for (int i = 0; i < nums.size(); i++) {
        res[i] *= left;
        left *= nums[i];
    }
    for (int i = nums.size() - 1; i >= 0; i--) {
        res[i] *= right;
        right *= nums[i];
    }
    return res;
}


int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> res = productExceptSelf(nums);
    for (int i: res) {
        cout << i << endl;
    }
    return 0;
}