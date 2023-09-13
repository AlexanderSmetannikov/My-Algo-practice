// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:

    int digit_sum (int n) {
        int ans = 0;
        while (n != 0) {
            ans += (n % 10);
            n /= 10;
        } 
        return ans;
    }
    int differenceOfSum(vector<int>& nums) {
        int digit = 0, sum = 0;
        for (int n: nums) {
            digit += digit_sum(n);
            sum += n;
        }
        return abs(digit - sum);
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);