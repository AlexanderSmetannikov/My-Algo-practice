// https://leetcode.com/problems/complement-of-base-10-integer

uint32_t is_bit(int n, short index) { return (n & (1u << index));}
uint32_t set_bit(int n, short index) {return (n | (1u << index));}
uint32_t bitwiseComplement(uint32_t num){
    uint32_t ans = 0;
    short index;
    for (index = 31; !is_bit(num, index) && index >= 0; index--);
    while (index--) if (!is_bit(num, index)) ans = set_bit(ans, index);
    return ans;
}
