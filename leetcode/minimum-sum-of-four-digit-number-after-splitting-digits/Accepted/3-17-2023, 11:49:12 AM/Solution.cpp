// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        string str = std::to_string(num);
        sort(str.begin(), str.end());
        short d0 = str[0] - '0';
        short d1 = str[1] - '0';
        short d2 = str[2] - '0';
        short d3 = str[3] - '0';
        return (d0 * 10 + d2) + (d1 * 10 + d3);
    }
};