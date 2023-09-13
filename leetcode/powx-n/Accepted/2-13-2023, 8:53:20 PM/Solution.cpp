// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, long n) {
        if (n == 0) return 1;
        if (n & 1) return myPow(x, n - 1) * x;
        if (n < 0) return 1.0 / myPow(x, -n);
        return myPow(x * x,  n / 2);
    }
};