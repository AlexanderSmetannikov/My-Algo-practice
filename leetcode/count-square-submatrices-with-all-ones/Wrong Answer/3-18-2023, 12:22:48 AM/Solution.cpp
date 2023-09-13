// https://leetcode.com/problems/count-square-submatrices-with-all-ones

class Solution {
public:

    bool is_square_all_one(vector<vector<int>>& matr, int x, int y, int side) {
        int n = matr.size();
        int m = matr[0].size();
        if (x + side <= n && y + side <= m) {
            for (int i = x; i < x + side; i++) {
                for (int j = y; j < y + side; j++) {
                    if (matr[i][j] == 0) return false;
                }
            }
        } else return false;
        return true;
    }

    void update(vector<vector<int>>& matr, int x, int y, int side) {
        for (int i = x; i < x + side; i++) {
            for (int j = y; j < y + side; j++) {
                matr[i][j]++;
            }
        }
    }

    void grow(vector<vector<int>>& matr) {
        int side;
        int n = matr.size();
        int m = matr[0].size();
        for (int i = 0; i < n; i++) {
            side = 1;
            for (int j = 0; j < m; j++) {
                while (is_square_all_one(matr, i, j, side)) {
                    update(matr, i, j, side);
                    side++;
                }
            }
        }
    }
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
        grow(matrix);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans += matrix[i][j];
            }
        }
        return !(ans % 2) ? ans / 2 : ans / 2 + 1;
    }
};