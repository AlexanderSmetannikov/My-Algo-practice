// https://leetcode.com/problems/validate-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

bool isVal(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if (!root) return true;

        if ((minNode && root->val <= minNode->val) || (maxNode && root->val >= maxNode->val)) {
            return false;
        }

        return isVal(root->left, minNode, root) && isVal(root->right, root, maxNode);
    }

    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        
        return isVal(root, nullptr, nullptr);
    }
};