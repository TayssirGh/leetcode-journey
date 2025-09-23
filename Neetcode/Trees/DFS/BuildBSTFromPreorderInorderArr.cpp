//
// Created by tayssir on 9/22/25.
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
// the whole idea of this problem is that preorder starts with root, and inorder has the root as mid to know left and right
// note⚠️: passing index by value -> every recursive call gets its own copy -> heap-buffer-overflow : use reference 😄
TreeNode* buildTreeRecursive(vector<int>& preorder, int start ,int end, int& index, unordered_map<int, int> map) {
    if (start > end) { return nullptr; }
    int rootVal = preorder[index++];
    TreeNode* root = new TreeNode(rootVal);
    int mid = map[rootVal];
    root->left = buildTreeRecursive(preorder, start, mid - 1, index, map);
    root->right = buildTreeRecursive(preorder, mid + 1, end, index, map);
    return root;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int index = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < inorder.size(); i++) {
        map[inorder[i]] = i;
    }
    return buildTreeRecursive(preorder, 0, preorder.size() - 1, index, map);

}


int main() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    TreeNode* root = buildTree(preorder, inorder);


    return 0;
}