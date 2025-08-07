//
// Created by tayssir on 8/7/25.
//
#include <bits/stdc++.h>

using namespace std;
int maxArea(vector<int>& height) {
    int left = 0, right = height.size()-1, maxAreaa = 0;
    while (left < right) {
        maxAreaa = max(maxAreaa, abs(left-right) * min(height[left], height[right]));
        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return maxAreaa;
}
int main() {
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(nums) << " ";
return 0;
}