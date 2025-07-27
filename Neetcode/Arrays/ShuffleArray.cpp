//
// Created by tayssir on 7/23/25.
//
#include <bits/stdc++.h>

using namespace std;

// THIS came out with 4ms(beats only 19%)
vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> result;
    int index = 0;
    for (int i = 0; i < n; i++) {
        result.push_back(nums[index]);
        result.push_back(nums[index + n]);
        index++;
    }
    return result;
}

//THIS also came out by 4ms, but beats 65%
vector<int> leetcodeSolution(vector<int> &nums, int n) {
    int i = 0 ;
    vector<int> ans ;
    while(i < n){
        int j = i + n ;
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        i++;
    }
    return ans;
}


int main() {
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    const vector<int> res = shuffle(nums, 3);
    for (int i = 0; i < nums.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}
