//
// Created by tayssir on 10/3/25.
//
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> rightSideView(TreeNode* root) {
    vector<int> result;
    queue<TreeNode*> q;
    if (!root) {
        return result;
    }
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            if (i == size - 1) {
                result.push_back(node->val);
            }
            q.pop();
            if (node->left) {
                q.push(node->left);
            }

            if (node->right) {
                q.push(node->right);
            }
        }
    }
    return result;
}