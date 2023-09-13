// https://leetcode.com/problems/power-of-four

impl Solution {
    pub fn is_power_of_four(n: i32) -> bool {
        n > 0 && (n & (n - 1)) == 0 && (n as u 32 & 0xAAAAAAAAu32) == 0
    }
}
