//
// Created by tayssir on 10/12/25.
//
#include <bits/stdc++.h>
using namespace std;
// This is the classic way to do it, takes 51 ms (tooo much)
class KthLargest {
    vector<int> elements;
    int kLargest;
public:
    KthLargest(int k, vector<int>& nums) {
        kLargest = k;
      sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < nums.size(); i++) {
            elements.push_back(nums[i]);
        }
    }

    int add(int val) {
        int left = 0, right = elements.size()-1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (elements[mid] < val) {
                right = mid - 1;
            }
            else  {
                left = mid + 1;
            }
        }
        elements.insert(elements.begin()+right, val);
        return elements[kLargest];
    }
};
// here is the implementation of min Heap, it actually runs on 4ms 🎊
class MinHeapSolution {
    int num;
    priority_queue<int, vector<int>, greater<int>> pq;
    public:
    MinHeapSolution(int k, vector<int>& nums) {
        num = k;
        for (int elt : nums) {
            pq.push(elt);
            if (pq.size() > num) {
                pq.pop();
            }
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > num) {
            pq.pop();
        }
        return pq.top();
    }

};