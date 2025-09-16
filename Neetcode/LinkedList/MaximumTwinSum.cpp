#include <vector>
//
// Created by tayssir on 9/16/25.
//
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int pairSum(ListNode* head) {
    vector<int> ans;
    while (head) {
        ans.push_back(head->val);
        head = head->next;
    }
    int maxSum = 0;
    for (int i = ans.size() - 1; i >= 0; i--) {
        maxSum = max(maxSum, ans[i] + ans[ans.size() - i -1]);
    }
    return maxSum;

}