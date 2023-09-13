// https://leetcode.com/problems/sqrtx

impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        let mut ans: i32 = 1;
        while ans * ans <= x {
            ans = ans + 1;
        }
        ans - 1
    }
}