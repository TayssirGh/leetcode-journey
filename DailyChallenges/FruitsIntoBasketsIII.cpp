//
// Created by tayssir on 8/6/25.
//
#include <bits/stdc++.h>

using namespace std;

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) { // TLE for this one
    int count = fruits.size();
    if (count == 1) {
        return fruits[0] <= baskets[0]? 0 : 1;
    }
    int i = 0, j = 0;
    while (i < fruits.size() && j < fruits.size()) {
        if (fruits[i] <= baskets[j]) {
            count--;
            baskets.erase(baskets.begin() + j);
            i++;
            j=0;
        }
        else if (j == baskets.size() - 1) {
            j = 0;
            i++;
        }
        else if (fruits[i] > baskets[j]) {
            j++;
        }

    }
    return count;
}
int sol(vector<int>& fruits, vector<int>& baskets) {
    int count = fruits.size();
    for (int fruit : fruits) {
        int i = 0;
        while (i< baskets.size()) {
            if (fruit <= baskets[i]) {
                count--;
                baskets[i] = 0;
                break;
            }
            i++;
        }
    }
    return count;
}
int main() {
    vector<int> fruits = {98,63};
    vector<int> baskets = {67,85};
    cout << numOfUnplacedFruits(fruits, baskets) << "\n";
    return 0;
}