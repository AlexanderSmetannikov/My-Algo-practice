// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int y = x;
        long long reverse = 0;
        while (x / 10) {
            reverse *= 10;
            reverse += (x % 10);
            x /= 10;
        }
        reverse *= 10;
        reverse += (x % 10);

        return y == reverse;
    }
};