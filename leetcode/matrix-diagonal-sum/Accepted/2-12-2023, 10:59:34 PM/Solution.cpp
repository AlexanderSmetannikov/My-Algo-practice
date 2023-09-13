// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int size = mat.size();
        for (int i = 0; i < size; i++) {
                sum += (mat[i][i] + mat[i][size-i - 1]);
        }
        if (size % 2 != 0) sum -= mat[size/2][size/2];
        return sum;     
    }
};