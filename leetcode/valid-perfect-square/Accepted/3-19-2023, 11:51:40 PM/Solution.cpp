// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        
        int l = 0, r = num / 2;
        long long mid;
        while (l <= r) {
            mid = l + (r - l) / 2;
            cout << mid;
            if (mid * mid == num) return true;
            else if (mid * mid > num) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};