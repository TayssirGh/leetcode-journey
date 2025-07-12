//
// Created by tayssir on 7/9/25.
//
#include <bits/stdc++.h>

using namespace std;
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] > b[1];
    });

    int totalUnits = 0;
    for (const auto& box : boxTypes) {
        const int count = min(truckSize, box[0]);
        totalUnits += count * box[1];
        truckSize -= count;
        if (truckSize == 0) break;
    }
    return totalUnits;
}int main() {
    vector<vector<int>> nums = {{5,10}, {2,5}, {4,7}, {3,9}};
    cout << maximumUnits(nums, 10) << "\n";
    return 0;
}