//
// Created by tayssir on 8/7/25.
//
#include <bits/stdc++.h>

using namespace std;
int maxOperations(vector<int>& nums, int k) { // This gave me TLE :/
    if (nums.size() == 1) {
        return nums[0] == k ? 1 : 0;
    }
    int count = 0;
    int lef = 0, right = 1;
    while (lef < nums.size() && right < nums.size()) {
        if (nums[lef] + nums[right] == k) {
            nums.erase(nums.begin() + right);
            nums.erase(nums.begin() + lef );
            right= lef + 1;
            count++;
        }
        else {
            right++;
            if (right > nums.size() - 1 ) {
                lef ++;
                right = lef + 1;
            }
        }
    }
    return count;
}
int secondSolution(vector<int>& nums, int k) { // This is way better, still 92 ms which is just bad but beats 60%
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1, count = 0;
    while (left < right) {
        if (nums[left] + nums[right] == k) {
            count++;
            left++;
            right--;
        }
        else if (nums[left] + nums[right] > k) {
            right--;
        }
        else {
            left ++ ;
        }
    }
    return count;
}
int main() {
    vector<int> nums = {2,2,2,3,1,1,4,1};
    cout << secondSolution(nums, 4) << " ";
    return 0;
}