// https://leetcode.com/problems/power-of-four

impl Solution {
    pub fn is_power_of_four(n: i32) -> bool { 
        let mut x = n;
        if n == 1 {return true;}
        loop {
            if x == 4 {
                return true;
            }
            x = x / 4;
            if x < 4 {
                break;
            }
        }
        false
    }
}