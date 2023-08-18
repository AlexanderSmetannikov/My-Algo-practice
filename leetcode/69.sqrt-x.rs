/*
 * @lc app=leetcode id=69 lang=rust
 *
 * [69] Sqrt(x)
 */

// @lc code=start
impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        let mut ans: i64 = 1;
        while ans * ans <= x as i64 {
            ans = ans + 1;
        }
        (ans - 1) as i32
    }
}
// @lc code=end

