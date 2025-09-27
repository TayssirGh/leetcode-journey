//
// Created by tayssir on 9/27/25.
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
// here I had to pass targetSum as long long because I had signed integer overflow as error
    int dfs(TreeNode* node, long long targetSum) {
        if (!node) return 0;
        int sum = 0;
        if (targetSum == node->val) {
            sum++;
        }
        sum += dfs(node->left, targetSum - node->val);
        sum += dfs(node->right, targetSum - node->val);
        return sum;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;
        int n = dfs(root, targetSum);
        int left = pathSum(root->left, targetSum);
        int right = pathSum(root->right, targetSum);
        return n + left + right;
    }