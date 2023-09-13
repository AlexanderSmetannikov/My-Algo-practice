// https://leetcode.com/problems/powx-n

impl Solution {
    pub fn my_pow(x: f64, n: i32) -> f64 {
        if n == 0 {return 1.0;}
        else if n < 0 {return 1.0 / Solution::my_pow(x, -n);}
        else if n & 1 == 1 {return x * Solution::my_pow(x, n - 1);}
        let ans = Solution::my_pow(x * x, n / 2);
        ans
    }
}