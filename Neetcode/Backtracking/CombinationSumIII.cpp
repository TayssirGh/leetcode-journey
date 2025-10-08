//
// Created by tayssir on 10/8/25.
//
#include <bits/stdc++.h>
using namespace std;
void backtrack(vector<vector<int>>& ans, vector<int>& path, int n, int k,int idx) {
    if (k == 0 && n == 0) {
        ans.push_back(path);
    }
    if (k< 0 || n < 0) return;
    for (int i = idx; i <= 9; i++) {
        path.push_back(i);
        backtrack(ans, path, n - i, k - 1, i+1);
        path.pop_back();
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> path;
    vector<vector<int>> result;
    backtrack(result, path, n, k, 1);
    return result;
}
int main() {
    vector<vector<int>> ans = combinationSum3(3, 7);
    for (int i = 0; i < ans.size(); i++) {
        cout << "<";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << ">" ;
    }
    return 0;
}