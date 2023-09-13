// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first = 0, second = 0;
        int i;
        int tmp = 1e9;
        for (i = 0; i < m && n != 0; i++) {
            if (nums1[first] <= nums2[second]) {
                nums1[i] = nums1[first];
                first++;
            } else {
                tmp = nums1[i];
                nums1[i] = nums2[second];
                nums2[second] = tmp;
                if (second < n - 1) second++;
                first++;
            }
            if (tmp < nums1[i]) swap(nums1[i], tmp);
        }
        sort(nums2.begin(), nums2.end());
        for (i = 0; i < n; i++) nums1[i + m] = nums2[i];
    }
};