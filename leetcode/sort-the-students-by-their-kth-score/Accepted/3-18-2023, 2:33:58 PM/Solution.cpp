// https://leetcode.com/problems/sort-the-students-by-their-kth-score

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> index;
        vector<vector<int>> ans;
        for (int i = 0; i < score.size(); i++) {
            index.push_back(score[i][k]);
        }
        sort(index.begin(), index.end());
        reverse(index.begin(), index.end());
        for(int ind: index) {
            for (int i = 0; i < score.size(); i++) if (score[i][k] == ind) ans.push_back(score[i]);
        }
        return ans;
    }
};