//
// Created by tayssir on 9/20/25.
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
int minValue(TreeNode *root) {
    TreeNode* p = root;
    while (p && p->left) {
        p = p->left;
    }
    return p->val;
}
TreeNode* deleteNode(TreeNode* root, int val) {
    if (!root) {
        return nullptr;
    }
    if (val > root->val) {
        root -> right = deleteNode(root->right, val);
    }
    else if (val < root->val) {
        root -> left = deleteNode(root->left, val);
    }
    else {
        if (!root -> left) {
            return root -> right;
        }
        if (!root -> right) {
            return root -> left;
        }
        int minimum = minValue(root -> right);
        root->val = minimum;
        root -> right = deleteNode(root -> right, minimum);
    }
    return root;
}