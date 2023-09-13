// https://leetcode.com/problems/diameter-of-binary-tree

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
    int loc_d(TreeNode* &root) {
        int ans = 0;

        while (root && root -> left) {
            ans++;
            root -> left = root -> left -> left;
        }
        while (root && root -> right) {
            ans++;
            root -> right = root -> right -> right;
        }
        // return max(max(ans, loc_d(root -> left)), loc_d(root -> right));
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int ans = 0;
        // while()
        return loc_d(root);
    }
};