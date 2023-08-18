/*
 * @lc app=leetcode id=704 lang=rust
 *
 * [704] Binary Search
 */

// @lc code=start
impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        let mut l: usize = 0;
        let mut r: usize = nums.len() - 1;
        let mut mid: usize = l + (r - l) / 2;
        while l < r {
            mid = l + (r - l) / 2;
            if nums[mid] == target { return mid as i32; }
            if target > nums[mid] {l = mid + 1;}
            else {r = mid;}
        }
        if nums[r] == target {r as i32} else {-1 as i32}
    }
}
// @lc code=end

