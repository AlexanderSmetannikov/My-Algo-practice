// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        double res;
        // if (n == 0) return 1;
        // else if (n > 0) {
        //     res = x;
        //     for (int i = 1; i < n; i++) {
        //         res *= x;
        //     }
        // } else if (n < 0) {
        //     res = 1;
        //     vector<int> ans(n);
        //     ans[0] = an
        //     for (int i = 0; i < abs(n); i++) {
        //         res /= x;
        //     }
        // }
        if (n == 0) return 1;
        if (n > 0) {
            if (n == 1) return x;
            else return myPow(x, n - 1) * x;
        }
        if (n < 0) {
            if (n == -1) return 1 / x;
            else return myPow(x, n + 1) / x;
        }
        return res;
    }
};