// https://leetcode.com/problems/count-square-submatrices-with-all-ones

class Solution {
public:

    bool is_square_all_one(vector<vector<int>>& matr, int x, int y, int side) {
        int n = matr.size();
        int m = matr[0].size();
        if (x + side < n && y + side < m) {
            for (int i = x; i <= x + side; i++) {
                for (int j = y; j <= y + side; j++) {
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

    int grow(vector<vector<int>>& matr) {
        int side = 0;
        int n = matr.size();
        int m = matr[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                side = 0;
                while (is_square_all_one(matr, i, j, side)) {
                    // cout << i << " " << j << " " << side << endl;
                    // update(matr, i, j, side);
                    ans++;
                    side++;
                }
            }
        }
        return ans;
    }
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = grow(matrix);

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         ans += matrix[i][j];
        //     }
        // }
        // return !(ans % 2) ? ans / 2 : ans / 2 + 1;
        return ans;
    }
};