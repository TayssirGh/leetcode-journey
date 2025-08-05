//
// Created by tayssir on 8/5/25.
//
#include <bits/stdc++.h>

using namespace std;

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int count = fruits.size();
    for (int fruit : fruits) {
        int i = 0;
        while (i< baskets.size()) {
            if (fruit <= baskets[i]) {
                count--;
                baskets.erase(baskets.begin() + i);
                break;
            }
            i++;
        }
    }
    return count;
}
int main() {
    vector<int> fruits = {1,3,6};
    vector<int> baskets = {2,5,2};
    cout << numOfUnplacedFruits(fruits, baskets) << "\n";
    return 0;
}