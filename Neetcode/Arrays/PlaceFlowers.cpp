//
// Created by tayssir on 8/5/25.
//
#include <bits/stdc++.h>

using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (n == 0) {
        return true;
    }
    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] ==  0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0 )) {
            flowerbed[i] = 1;
            n--;
        }
        if (n == 0) return true;
    }
    return false;
}
int main() {
    vector<int> nums = {1,0,0,0,1,0,0};
    cout << canPlaceFlowers(nums, 2) << "\n";
    return 0;
}