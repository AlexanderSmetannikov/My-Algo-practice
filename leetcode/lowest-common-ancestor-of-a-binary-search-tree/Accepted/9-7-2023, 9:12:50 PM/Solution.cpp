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
        bool same = true;
        int pval = p -> val;
        int qval = q -> val;
        while (true) {
            if (ptr -> val > pval && ptr -> val > qval) ptr = ptr -> left;
            else if (ptr -> val < pval && ptr -> val < qval) ptr  = ptr -> right;
            else break;
        }
        return ptr;
    }
};