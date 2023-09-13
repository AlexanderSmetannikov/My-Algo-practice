// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first = 0, second = 0;
        int i;
        for (i = 0; i < m && i < n; i++) {
            if (nums1[first] <= nums2[second]) {
                nums1[i] = nums1[first];
                first++;
            } else {
                int tmp = nums1[i];
                nums1[i] = nums2[second];
                nums2[second] = tmp;
                second++;
                first++;
            }
        }
        
        for (i = 0; i < n; i++) nums1[i + m] = nums2[i];
    }
};