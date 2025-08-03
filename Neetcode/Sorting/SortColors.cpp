//
// Created by tayssir on 8/3/25.
//
#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
    unordered_map<int, int> m;
    m[0] = 0,m[1] = 0, m[2] = 0;
    for (int num : nums) {
        m[num] ++;
    }
    int i = 0, color = 0;
    while (color<=2 && i < nums.size()) {
        if (m[color] > 0) {
            nums[i] = color;
            i++;
            m[color]--;
        }
        else {
            color++;
        }
    }
}
