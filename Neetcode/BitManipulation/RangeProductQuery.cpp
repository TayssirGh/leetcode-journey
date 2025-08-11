//
// Created by tayssir on 8/11/25.
//
#include <bits/stdc++.h>
using namespace std;
// This is my brute force solution, but it's not that bad (14 ms beats 77% runtime + 50% mem),it's actually better than the other solutions I found
vector<int> productQueries(int n, vector<vector<int>>& queries) {
    string binary = bitset<31>(n).to_string();
    vector<int> powers;
    int mod = 1e9+7;
    for (int i = binary.size(); i > 0; i--) {
        if (binary[i] == '1') {
            powers.push_back(pow(2, binary.size() -1 - i));
        }
    }
    vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        if (queries[i][0] == queries[i][1]) {
            result.push_back(powers[queries[i][0]]);
        }
        else {
            int left = queries[i][0];
            int right = queries[i][1];
            long long product = 1;
            for (int k = left; k <= right; k++) {
                product *= powers[k];
                product = product % mod;
            }
            result.push_back(product );
        }
    }
    return result;
}
int main() {
    vector<vector<int>> queries = {{0,1},{2,2},{0,3}};
    vector<int> nums = productQueries(15, queries);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << "\n";
    }
    return 0;
}