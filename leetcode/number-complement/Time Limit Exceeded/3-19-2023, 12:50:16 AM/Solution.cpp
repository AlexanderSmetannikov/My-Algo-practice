// https://leetcode.com/problems/number-complement

class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int max_xor = 0;
        for (int i = 0; i < num; i++) if ( (num ^ i) > max_xor) {
            max_xor = num ^ i;
            ans = i;
        }
        return ans;
    }
};