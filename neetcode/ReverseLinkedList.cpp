//
// Created by tayssir on 7/27/25.
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
ListNode* reverseList(ListNode* head) {
    std::stack<int> s;
    ListNode* q = head;

    while (q != nullptr) {
        s.push(q->val);
        q = q->next;
    }

    if (s.empty()) return nullptr;

    ListNode* res = new ListNode(s.top());
    s.pop();
    ListNode* p = res;

    while (!s.empty()) {
        p->next = new ListNode(s.top());
        s.pop();
        p = p->next;
    }

    return res;
}