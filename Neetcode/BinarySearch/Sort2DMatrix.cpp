//
// Created by tayssir on 8/4/25.
//
#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int lowLine = 0, highLine = matrix.size() - 1;
    int high = 0;
    while (lowLine <= highLine) {
        int mid = lowLine + (highLine - lowLine) / 2;
        high = matrix[mid].size() - 1;
        if (matrix[mid][0] == target || matrix[mid][high] == target) {
            return true;
        }
        if (matrix[mid][0] < target && matrix[mid][high] > target) {
            return binary_search(matrix[mid].begin(), matrix[mid].end(), target);
        }
        if (matrix[mid][0] > target ) {
            highLine = mid - 1;
        }
        else {
            lowLine = mid + 1;
        }

    }
    return false;
}
int main() {
    vector<vector<int>> nums = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << searchMatrix(nums, 12) << "\n";
    return 0;
}
