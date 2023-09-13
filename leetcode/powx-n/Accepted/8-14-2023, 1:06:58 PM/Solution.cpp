// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, long n) {
        if (n == 0) return 1;
        else if (n < 0) return 1 / myPow(x, -n);
        else if (n & 1) return x * myPow(x, n - 1);
        return myPow(x * x, n / 2);
    }
};

// 2 ^10

// 2 * 2 ^ 5
// 2 * 2 * 2 * 2 ^ 4
// 2 * 2 * 2 * 2 * 2 ^ 2
// 2 * 2 * 2 * 2 * 2 * 2