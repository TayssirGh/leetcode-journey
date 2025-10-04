//
// Created by tayssir on 10/4/25.
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
int maxLevelSum(TreeNode* root) {
    if (!root) { return 0;}

    queue<TreeNode*> q;
    q.push(root);

    int maxSum = INT_MIN;
    int maxLevel = 1;
    int currentLevel = 1;
    while (!q.empty()) {
        int levelSum = 0;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            q.pop();
            levelSum += node->val;
            if (node -> left) { q.push(node->left);}
            if (node -> right) {q.push(node->right);}
        }
        if (levelSum > maxSum) {
            maxSum = levelSum;
            maxLevel = currentLevel;
        }
        currentLevel++;
    }
    return maxLevel;
}