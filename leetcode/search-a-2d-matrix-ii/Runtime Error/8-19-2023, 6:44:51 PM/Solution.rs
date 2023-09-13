// https://leetcode.com/problems/search-a-2d-matrix-ii

impl Solution {
    pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
        let mut i: usize = 0usize;
        let mut j: usize = matrix[0].len() - 1;

        while (i < matrix.len() && j >= 0) {
            if matrix[i][j] == target { return true; }
            if matrix[i][j] > target { j -= 1; }
            else { i += 1; }
        }
        return false;
    }
}