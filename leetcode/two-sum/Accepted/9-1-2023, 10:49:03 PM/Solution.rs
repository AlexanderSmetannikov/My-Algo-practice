// https://leetcode.com/problems/two-sum

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut v: Vec<i32>= vec![0, 0];
        let mut i: usize = 0;
        while i < nums.len() - 1 {
            let mut j: usize = i + 1;
            while j < nums.len() {
                if nums[i] + nums[j] == target {
                    return vec![i as i32, j as i32]
                }
                j+=1;
            }
            i+=1;
        }
        vec![0i32, 0i32]
    }
}