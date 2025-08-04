//
// Created by tayssir on 8/4/25.
//
#include <bits/stdc++.h>

using namespace std;

int totalFruit(vector<int>& fruits) {
    int basket1 = -1, basket2 = -1;
    int currentCount = 0, maxCount = 0, lastCount = 0;
    for (int fruit: fruits) {
        if (fruit == basket1 || fruit == basket2) {
            currentCount++;
        }
        else {
            currentCount = lastCount + 1;
        }
        if (fruit == basket1) {
            lastCount++;
        }
        else {
            lastCount =  1;
            basket2 = basket1;
            basket1 = fruit;
        }
        maxCount = max(maxCount, currentCount);
    }
    return maxCount;
}

int main() {
    vector<int> nums = {1,2,3,2,2};
    cout << totalFruit(nums) << "\n";
    return 0;
}

