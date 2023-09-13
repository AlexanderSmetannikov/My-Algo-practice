// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        double res;
        if (n == 0) return 1;
        else if (n > 0) {
            res = x;
            for (int i = 1; i < n; i++) {
                res *= x;
            }
        } else if (n < 0) {
            res = 1;
            for (int i = 0; i < abs(n); i++) {
                res /= x;
            }
        }
        return res;
    }
};