// https://leetcode.com/problems/angle-between-hands-of-a-clock

impl Solution {
    pub fn angle_clock(hour: i32, minutes: i32) -> f64 {
        let h: f64 = 30. * hour as f64 + 0.5 * minutes as f64;
        let m: f64 = 6. * minutes as f64;
        let diff: f64 = (h - m).abs();
        if diff <= 180. {diff} else {360. - diff}
    }
}