// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == -2147483648 && divisor == -1) return 2147483647;
        if (dividend == -2147483648 && divisor == 1) return -2147483648;
        int ans = 0;
        int sign = (dividend & (1 << 31)) ^ (divisor & (1 << 31));
        dividend = abs(dividend);
        divisor = abs(divisor);
        while (dividend - divisor >= 0) {
            dividend -= divisor;
            ans++;
        }
        // ans--;
        return (sign) ? -ans : ans;
    }
};