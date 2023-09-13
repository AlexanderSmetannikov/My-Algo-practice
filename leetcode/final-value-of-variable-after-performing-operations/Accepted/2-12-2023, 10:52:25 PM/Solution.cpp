// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int minus = 0;
        int plus = 0;
        for(auto &o : operations) {
            minus += count(o.begin(), o.end(), '-');
            plus += count(o.begin(), o.end(), '+');
        }
        x -= minus/2;
        x += plus/2;
        return x;
    }
};