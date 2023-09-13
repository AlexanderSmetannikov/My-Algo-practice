// https://leetcode.com/problems/complement-of-base-10-integer

uint32_t is_bit(uint32_t n, uint32_t index) { return (n & (1u << index));}
uint32_t set_bit(uint32_t n, uint32_t index) {return (n | (1u << index));}
uint32_t bitwiseComplement(uint32_t num){
    uint32_t ans = 0;
    uint32_t index;
    for (index = 31; !is_bit(num, index) && index >= 0; index--);
    while (index--) if (!is_bit(num, index)) ans = set_bit(ans, index);
    return ans;
}
