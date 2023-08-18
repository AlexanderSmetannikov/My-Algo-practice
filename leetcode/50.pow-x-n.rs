/*
 * @lc app=leetcode id=50 lang=rust
 *
 * [50] Pow(x, n)
 */

// @lc code=start
impl Solution {
    pub fn my_pow(x: f64, n: i32) -> f64 {
        if n == 0 {
            return 1.0;
        }

        let mut result = 1.0;
        let mut base = x;
        let mut exponent = n as i64;

        if exponent < 0 {
            base = 1.0 / base;
            exponent = -exponent;
        }

        while exponent > 0 {
            if exponent % 2 == 1 {
                result *= base;
            }
            base *= base;
            exponent /= 2;
        }

        result
    }
}
// @lc code=end

