// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == -2147483648 && divisor == -1) return 2147483647;
        if (dividend == -2147483648 && divisor == 1) return -2147483648;
        if (dividend == -2147483648 && divisor == -2147483648) return 1;
        int ans = 0;
        int sign = (dividend & (1 << 31)) ^ (divisor & (1 << 31));
        long long end = abs(dividend);
        long long sor = abs(divisor);
        while (end - sor >= 0) {
            end -= sor;
            ans++;
        }
        // ans--;
        return (sign) ? -ans : ans;
    }
};