//
// Created by tayssir on 9/29/25.
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
int helper(TreeNode *root, bool isLeft, int depth) {
    if (! root) {
        return depth;
    }
    if (isLeft) {
        depth = max(depth,
            max(helper(root->right, false, depth + 1), helper(root->left, true, 0)));
    }
    else {
        depth = max(depth,
            max(helper(root->left, true, depth + 1), helper(root->right, false, 0)));
    }
    return depth;

}

int longestZigZag(TreeNode* root) {
    return max(helper(root->left, true, 0), helper(root->right, false, 0));
}