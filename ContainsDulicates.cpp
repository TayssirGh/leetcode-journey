//
// Created by tayssir on 7/9/25.
//
#include <bits/stdc++.h>

using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for ( int num : nums) {
        if (seen.count(num) > 0) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}
int main() {
    vector<int> nums = {5,10,5, 2, 4,3,9};
    containsDuplicate(nums)? cout << "true" << "\n" : cout << "false" << "\n";
    return 0;
}