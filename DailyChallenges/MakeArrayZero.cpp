//
// Created by tayssir on 7/9/25.
//
#include <bits/stdc++.h>

using namespace std;
int minimumOperations(vector<int>& nums) {
    const set<int> unique(nums.begin(), nums.end());
 return static_cast<int>(unique.size() - unique.count(0));
}
int main() {
    vector<int> nums = {0};
    cout << minimumOperations(nums) << "\n";
    return 0;
}