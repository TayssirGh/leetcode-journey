//
// Created by tayssir on 7/23/25.
//
#include <bits/stdc++.h>

using namespace std;
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concat = nums;
        for (int num : nums) {
            concat.push_back(num);
        }
        return concat;
    }


int main() {
    vector<int> nums = {1,3,2,1};
    const vector<int> res = getConcatenation(nums);
    for (const int re : res) {
        cout << re << " ";
    }
    return 0;
}
