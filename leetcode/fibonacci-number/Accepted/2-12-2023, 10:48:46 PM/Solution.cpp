// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(const int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        else {
            return fib(n-1) + fib(n-2);
        }
    }
};