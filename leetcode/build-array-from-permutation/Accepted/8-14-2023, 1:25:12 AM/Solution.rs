// https://leetcode.com/problems/build-array-from-permutation

impl Solution {
    pub fn build_array(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut ans = vec![0; n];

        for i in 0..n {
            ans[i] = nums[nums[i] as usize];
        }

        ans
    }
}