// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ptr = root;
        while (true) {
            if ( (ptr -> val) > (p -> val) && (ptr -> val) > (q -> val) ) ptr = ptr -> left;
            else if ( (ptr -> val) < (p -> val) && (ptr -> val) < (q -> val) ) ptr  = ptr -> right;
            else break;
        }
        return ptr;
    }
};