//
// Created by tayssir on 8/11/25.
//
#include <bits/stdc++.h>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0, maxSum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    maxSum = sum;
    for (int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];
        maxSum = max(maxSum, sum);
    }
    return (maxSum/k);
}
int main() {
    vector<int> nums = {5};
    cout << findMaxAverage(nums, 1) << endl;
    return 0;
}