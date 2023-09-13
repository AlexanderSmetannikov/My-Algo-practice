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

    bool isVal(TreeNode* root) {
        if (!root) return true;
        
        if (root -> left && root -> right) {
            if (!(isVal(root -> right) && isVal(root -> left) && (root -> val > root -> left -> val && root -> val < root -> right -> val))) {
                return false;
            }
        }

        return true;
    }

    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        
        return isVal(root);
    }
};