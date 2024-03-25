#include <iostream>
#include "solution.h"

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution solution;
    std::vector<int> result = solution.inorderTraversal(root);

    std::cout << "Inorder traversal result: ";
    for(int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}