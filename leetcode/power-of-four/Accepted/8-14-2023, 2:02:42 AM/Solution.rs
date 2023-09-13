// https://leetcode.com/problems/power-of-four

impl Solution {
    pub fn is_power_of_four(n: i32) -> bool { 
        let mut x: f32 = n as f32;
        if n == 1 {return true;}
        loop {
            if x == 4.0 {
                return true;
            }
            x = x / 4.0;
            if x < 4.0 {
                break;
            }
        }
        false
    }
} 

