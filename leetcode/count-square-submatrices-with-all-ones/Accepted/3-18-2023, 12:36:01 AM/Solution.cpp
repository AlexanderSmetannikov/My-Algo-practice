// https://leetcode.com/problems/count-square-submatrices-with-all-ones

class Solution {
public:

    bool is_square_all_one(vector<vector<int>>& matr, const int x, const int y, const int side) {
        if (x + side < matr.size() && y + side < matr[0].size()) {
            for (int i = x; i <= x + side; i++) {
                for (int j = y; j <= y + side; j++) {
                    if (matr[i][j] == 0) return false;
                }
            }
        } else return false;
        return true;
    }
    
    int countSquares(vector<vector<int>>& matr) {
        int side = 0;
        int ans = 0;
        for (int i = 0; i < matr.size(); i++) {
            for (int j = 0; j < matr[0].size(); j++) {
                side = 0;
                while (is_square_all_one(matr, i, j, side)) {
                    ans++;
                    side++;
                }
            }
        }
        return ans;
    }
};