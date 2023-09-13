// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        short i = 0, j = matrix[0].size() - 1;
        while (i < matrix.size()) {
            if (matrix[i][j] == target) return true;
            else if (matrix[i][j] > target) {
                if (j == 0) return false;
                j--;
            }
            else i++;
        }
        return false;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);