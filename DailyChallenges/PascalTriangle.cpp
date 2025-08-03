//
// Created by tayssir on 8/2/25.
//
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> generate(int numRows) {
    if (numRows == 1) {
        return {{1}};
    }
    if (numRows == 2) {
        return {{1},{1, 1}};
    }
    vector<vector<int> > result = {{1}, {1, 1}};
    vector<int> temp;
    for (int i = 2; i < numRows; i++) {
        temp.clear();
        temp.push_back(1);
        for (int j = 0; j < result[i-1].size()-1; j++) {
            temp.push_back(result[i-1][j] + result[i-1][j+1]);
        }
        temp.push_back(1);
        result.push_back(temp);
    }
    return result;

};
int main() {
    vector<vector<int>> nums = generate(5);
    for (int i = 0; i < nums.size(); i++) {
        cout << ",";
        for (int j = 0; j < nums[i].size(); j++) {
            cout << nums[i][j] << " ";
        }
    }
    // cout << generate(5) << "\n";
    return 0;
}