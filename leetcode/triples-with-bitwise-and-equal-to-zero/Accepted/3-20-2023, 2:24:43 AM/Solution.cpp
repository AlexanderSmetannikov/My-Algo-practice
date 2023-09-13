// https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero

class Solution {
public:
    int countTriplets(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(1 << 16, 0);
    for (int x : nums) {
        for (int y : nums) {
            freq[x & y]++;
        }
    }
    int ans = 0;
    for (int x : nums) {
        for (int i = 0; i < (1 << 16); i++) {
            if ((i & x) == 0) {
                ans += freq[i];
            }
        }
    }
    return ans;
}
};