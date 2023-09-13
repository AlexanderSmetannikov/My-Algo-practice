// https://leetcode.com/problems/counting-bits

class Solution {
public:
    bool is_bit_set(int n, int index) {
        return (n & (1 << index)) ? 1 : 0;
    }

    int count_bits(int& n) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            if (is_bit_set(n, i)) result++;
        }
        return result;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            ans.push_back(count_bits(i));
        }
        return ans;
    }
};