#include <bits/stdc++.h>
using namespace std;

// Tree structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Recursive function
int minDepth(TreeNode* root) {
    if(root == NULL) return 0;

    if(root->left == NULL)
        return 1 + minDepth(root->right);

    if(root->right == NULL)
        return 1 + minDepth(root->left);

    return 1 + min(minDepth(root->left), minDepth(root->right));
}

int main() {
    // Creating tree manually:
    //       1
    //      / \
    //     2   3
    //    /
    //   4

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    cout << "Minimum Depth: " << minDepth(root);

    return 0;
}