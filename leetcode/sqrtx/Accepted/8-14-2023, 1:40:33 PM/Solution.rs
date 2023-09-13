// https://leetcode.com/problems/sqrtx

impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        let mut ans: i64 = 1;
        while ans * ans <= x as i64 {
            ans = ans + 1;
        }
        (ans - 1) as i32
    }
}