//
// Created by tayssir on 9/24/25.
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
int dfs(TreeNode *root, int maxSoFar) {
    if (!root) return 0;
    int count = 0;
    if (root->val >= maxSoFar) {
        count=1;
    }
    maxSoFar = max(maxSoFar, root->val);
    count += dfs(root->left, maxSoFar);
    count += dfs(root->right, maxSoFar);
    return count;
}
int goodNodes(TreeNode* root) {
    return dfs(root, root->val);
}