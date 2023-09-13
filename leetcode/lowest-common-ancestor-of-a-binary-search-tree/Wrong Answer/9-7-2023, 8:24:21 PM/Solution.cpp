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
    pair<int, TreeNode*> level(TreeNode* root, TreeNode* find) {
        int lvl = 0;
        TreeNode* minimum = root;
        TreeNode* ptr = root;
        while (ptr != find) {
            if (ptr -> val < minimum -> val) minimum = ptr;
            if (ptr -> val > find -> val) ptr = ptr -> left;
            else ptr = ptr -> right;
            lvl++;
        }
        if (ptr -> val < minimum -> val) minimum = ptr;
        return make_pair(lvl, minimum);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ptr = root;
        TreeNode* ans;
        pair<int, TreeNode*> ans1 = level(root, p);
        pair<int, TreeNode*> ans2 = level(root, q);
        cout << ans1.first << " " << ans1.second -> val << endl;
        cout << ans2.first << " " << ans2.second -> val << endl;

        if (ans1.first < ans2.first) return ans1.second;
        else return ans2.second;
    }
};