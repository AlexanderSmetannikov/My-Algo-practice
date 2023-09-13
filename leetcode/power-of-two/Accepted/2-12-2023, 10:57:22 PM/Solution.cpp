// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool is_bit_set(int& n, int index) {
        return (n & (1 << index));
    }    
    bool isPowerOfTwo(int n) {
        char cnt = 0;
        for (int i = 0; i < 32; i++){
            if(is_bit_set(n, i)) cnt++;
        }
        return (cnt == 1 && !is_bit_set(n, 31)) ? true : false;
    }
};