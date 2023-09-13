// https://leetcode.com/problems/number-complement

class Solution {
public:
    int is_bit(int& n, int index) {return n & (1 << index);}
    int set_bit(int& n, int index) {return (n | (1 << index));}

    int findComplement(int num) {
        int ans = 0;
        int index;
        for (index = 31; !is_bit(num, index); index--);
        for (int i = index; i >= 0; i--) {
            if (!is_bit(num, i)) ans = set_bit(ans, i);
        }
        return ans;
    }
};