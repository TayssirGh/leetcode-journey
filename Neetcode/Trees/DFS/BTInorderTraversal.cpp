//
// Created by tayssir on 9/21/25.
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
vector<int> inorder( TreeNode* root, vector<int>& res) {
    if (!root) return res;
    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
    return res;
}
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res;
    return inorder(root, res);
}
