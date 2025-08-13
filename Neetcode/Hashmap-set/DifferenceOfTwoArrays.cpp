//
// Created by tayssir on 8/13/25.
//
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) { // this is 20 ms beats only 67%
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    vector<vector<int>> result;
    vector<int> diff1, diff2;
    for (int elt: set1) {
        if (set2.count(elt) == 0) {
            diff1.push_back(elt);
        }
    }
    for (int elt: set2) {
        if (set1.count(elt) == 0) {
            diff2.push_back(elt);
        }
    }
    result.push_back(diff1);
    result.push_back(diff2);
    return result;
}
int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2,4,6};
    vector<vector<int>> res = findDifference(nums1, nums2);
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i] << " " ;
    }
    cout << endl;
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i] << " " ;
    }
    return 0;
}