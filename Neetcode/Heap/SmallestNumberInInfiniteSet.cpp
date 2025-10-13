//
// Created by tayssir on 10/13/25.
//
#include <bits/stdc++.h>
using namespace std;
class SmallestInfiniteSet {
public:
    int current;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    unordered_set<int> addedBack;

    SmallestInfiniteSet() {
        current = 1;
    }

    int popSmallest() {
        if (!minHeap.empty()) {
            int smallest = minHeap.top();
            minHeap.pop();
            addedBack.erase(smallest);
            return smallest;
        }
        return current++;
    }

    void addBack(int num) {
        if (num < current && addedBack.find(num) == addedBack.end()) {
            addedBack.insert(num);
            minHeap.push(num);
        }
    }
};