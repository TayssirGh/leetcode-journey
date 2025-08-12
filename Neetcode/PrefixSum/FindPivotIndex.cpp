//
// Created by tayssir on 8/12/25.
//
#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) { // This is 3 ms, beats only 22% , but it is an impl for prefix sum
    int n = nums.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    for (int i = 1; i < n; ++i) {
        left[i] = left[i - 1] + nums[i - 1];
    }
    for (int i = n-2; i >=0; i--) {
        right[i] = right[i+1] + nums[i+1];
    }
    for (int i = 0; i < n; ++i) {
        if (left[i] == right[i]) {
            return i;
        }
    }
    return -1;
}
int leetcodeSolution(vector<int>& nums) {
    int total = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (2*leftSum + nums[i] == total) {
            return i;
        }
        leftSum = leftSum + nums[i];
    }
    return -1;
}
int main() {
    vector<int >gain = {1,7,3,6,5,6};
    cout << pivotIndex(gain) << endl;
    return 0;
}