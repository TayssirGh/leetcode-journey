//
// Created by tayssir on 9/23/25.
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

void traverse(TreeNode *root, vector<int> &values) {
    if (!root) { return; }
    if (!root->left && !root->right) { values.push_back(root->val); }
    traverse(root->left, values);
    traverse(root->right, values);
}

bool leafSimilar(TreeNode *root1, TreeNode *root2) {
    vector<int> values1, values2;
    traverse(root1, values1);
    traverse(root2, values2);
    return values1 == values2;
}
