// https://leetcode.com/problems/number-complement

class Solution {
public:
    int is_bit(int& n, int index) {return n & (1 << index);}
    int set_bit(int& n, int index) {return (n | (1 << index));}

    int findComplement(int num) {
        int ans = 0;
        int index;
        for (index = 31; !is_bit(num, index); index--);
        while (index--) if (!is_bit(num, index)) ans = set_bit(ans, index);
        return ans;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);