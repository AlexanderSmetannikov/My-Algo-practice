// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

class Solution {
public:
    int minPartitions(const string n) {
        char max = '0';
        for (char c: n) if (max < c) max = c;
        return max - '0';
    }
};