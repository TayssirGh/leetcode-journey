//
// Created by tayssir on 8/6/25.
//
#include <bits/stdc++.h>

using namespace std;
bool increasingTriplet(vector<int>& nums) {
    int first_potential_max = INT_MAX, second_potential_max = INT_MAX;
    for (int curr: nums) {
        if (first_potential_max >= curr) {
            first_potential_max = curr;
        }else if (second_potential_max >= curr) {
            second_potential_max = curr;
        }
        else return true;
    }
    return false;
}
int main() {
    vector<int> nums = {20,100,10,12,5,13};

    cout << increasingTriplet(nums) << endl;

    return 0;
}