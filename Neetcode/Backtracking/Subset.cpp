//
// Created by tayssir on 10/8/25.
//
#include <bits/stdc++.h>
using namespace std;
void backtrack(vector<int> &nums, int start, vector<int> &path, vector<vector<int> > &result) {
    result.push_back(path);
    for (int i=start; i< nums.size(); i++) {
        path.push_back(nums[i]);
        backtrack(nums, i+1, path, result);
        path.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> path;
        vector<vector<int>> result;
    backtrack(nums, 0, path, result);
    return result;
}
int main() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = subsets(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << " < ";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << " > ";
    }
}