//
// Created by tayssir on 8/3/25.
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
ListNode* mergeKLists(vector<ListNode*>& lists) { // this is 258ms beats only 5% 😿
     ListNode* dummy = new ListNode(0);
     ListNode* tail = dummy;
     while (true) {
          int minIndex = -1;
          for (int i = 1; i < lists.size(); i++) {
               if (lists[i] != nullptr) {
                    if (minIndex == -1 || lists[i]->val < lists[minIndex]->val) {
                         minIndex = i;
                    }
               }
          }
          if (minIndex == -1) {
               break;
          }
          tail->next = lists[minIndex];
          tail = tail->next;
          lists[minIndex] = lists[minIndex]->next;
     }

     return dummy->next;
}
// this is merge sort implementation: it beats 100% with 0ms
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
}
ListNode* mergeSort(vector<ListNode*>& lists, int start, int end) {
     if (start == end) {
          return lists[start];
     }
     int mid = (start + end) / 2;
     ListNode* l1 = mergeSort(lists, start, mid);
     ListNode* l2 = mergeSort(lists, mid + 1, end);
     return mergeTwoLists(l1, l2);
}

ListNode* leetcodeSolution(vector<ListNode*>& lists) {
     if (lists.empty()) {return nullptr;}
     return mergeSort(lists, 0, lists.size() - 1);
}
