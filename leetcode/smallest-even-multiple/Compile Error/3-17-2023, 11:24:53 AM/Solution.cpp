// https://leetcode.com/problems/smallest-even-multiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        n % 2 == 0 ? return n : return n * 2;
    }
};