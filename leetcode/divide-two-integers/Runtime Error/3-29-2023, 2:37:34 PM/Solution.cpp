// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
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