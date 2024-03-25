#include "solution.h"

std::vector<int> Solution::inorderTraversal(TreeNode* root) {
    std::vector<int> result;
    inorder(root, result);
    return result;
}

void Solution::inorder(TreeNode* root, std::vector<int>& result) {
    if(root == nullptr) {
        return;
    }

    inorder(root -> left, result);
    result.push_back(root -> val);
    inorder(root -> right, result);
}