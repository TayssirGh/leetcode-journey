//
// Created by tayssir on 8/5/25.
//
#include <bits/stdc++.h>

using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max = *max_element(candies.begin(), candies.end());
    vector<bool> result;
    for (int candy : candies) {
        (candy + extraCandies >= max)?result.push_back(true): result.push_back(false);
    }
    return result;
}
int main() {
    vector<int> nums = {4,2,1,1,2};
    vector<bool> k = kidsWithCandies(nums, 1);
    for (bool candies : k) {
        cout << candies << "\n";
    }
    return 0;
}