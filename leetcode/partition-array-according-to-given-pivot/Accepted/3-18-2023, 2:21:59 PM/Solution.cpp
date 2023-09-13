// https://leetcode.com/problems/partition-array-according-to-given-pivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for (int n: nums) if (n < pivot) ans.push_back(n);
        for (int n: nums) if (n == pivot) ans.push_back(n);
        for (int n: nums) if (n > pivot) ans.push_back(n);
        return ans;
    }
};