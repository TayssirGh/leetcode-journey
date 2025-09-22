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
void inorder(TreeNode* root,int& cnt, int& ans, int k) {
    if (!root) return;
    inorder(root->left, cnt, ans, k);
    cnt++;
    if (cnt == k) {
        ans = root->val;
        return;
    }
    inorder(root->right, cnt, ans, k);

}
int kthSmallest(TreeNode* root, int k) {
    int count = 0;
    int ans = 0;
    inorder(root, count, ans, k);
    return ans;
}