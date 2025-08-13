//
// Created by tayssir on 8/13/25.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) { // 9ms beats only 43%
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            return {i, mp[complement]};
        }
    }
    return {-1, -1};
}
vector<int> leetcodeSolution(vector<int>& nums, int target) { //3ms beats 70%
    unordered_map<int, int> numMap;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }

    return {};
}
int main() {
    return 0;
}