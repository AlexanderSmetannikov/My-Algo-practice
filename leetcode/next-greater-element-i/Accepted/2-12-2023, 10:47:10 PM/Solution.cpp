// https://leetcode.com/problems/next-greater-element-i



class Solution {
public:
    vector<int> nextGreaterElement(const vector<int>& nums1, const vector<int>& nums2) {
        stack<int, vector<int>> st;
        unordered_map<int, int> numToAns;
        for(int i = (int)nums2.size() - 1; i >= 0; i--) {
            while(!st.empty() && st.top() < nums2[i]) {
                st.pop();
            }
            if (st.empty()) {
                numToAns[nums2[i]] = -1;
            } else {
                numToAns[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans(nums1.size());
        for (int i = 0; i < (int)nums1.size(); i++) {
            ans[i] = numToAns[nums1[i]];
        }
        return ans;
    }
};