//
// Created by tayssir on 8/26/25.
//
#include <bits/stdc++.h>
using namespace std;
int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int maxDiagonal = 0, maxArea = 0;

    for (auto & dimension : dimensions) {
        const int diagonal = dimension[0] * dimension[0] + dimension[1] * dimension[1];
        const int area = dimension[0] * dimension[1];

        if (diagonal > maxDiagonal || (diagonal == maxDiagonal && area > maxArea)) {
            maxDiagonal = diagonal;
            maxArea = area;
        }
    }

    return maxArea;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> cards = {{1,10}, {3,10}, {4,4}, {2,6}, {6,3}, {4,6}, {9,1}, {6,1}, {2,3}};
    cout << areaOfMaxDiagonal(cards) << endl;
    return 0;
}