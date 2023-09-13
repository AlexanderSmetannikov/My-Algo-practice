// https://leetcode.com/problems/sum-of-all-odd-length-subarrays

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int prod = ceil((i+1)*(n-i)/2.0);
            ans += (arr[i] * prod);
        }
        return ans;
    }
};
