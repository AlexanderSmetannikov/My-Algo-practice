// https://leetcode.com/problems/complement-of-base-10-integer

class Solution {
public:
    int is_bit(int& n, short index) { return n & (1 << index);}
    int set_bit(int& n, short index) {return (n | (1 << index));}
    int bitwiseComplement(int num) {
        int ans = 0;
        short index;
        for (index = 31; !is_bit(num, index) && index >= 0; index--);
        while (index--) if (!is_bit(num, index)) ans = set_bit(ans, index);
        return ans;
    }
};