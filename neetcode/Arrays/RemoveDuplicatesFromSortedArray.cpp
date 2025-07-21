//
// Created by tayssir on 7/19/25.
//

#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[count - 1]) {
            nums[count] = nums[i];
            count ++;
        }
    }
    return count;
}
int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    const string haystack = "sda";
    const string tst = "***********";
    const string needle = "a";
    cout << removeDuplicates(nums) << "\n";
    return 0;
}