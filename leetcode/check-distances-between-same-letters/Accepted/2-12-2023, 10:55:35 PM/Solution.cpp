// https://leetcode.com/problems/check-distances-between-same-letters

class Solution {
public:
    int find_pos(string& s, char c) {
        for (int i = 0; i < s.size(); i++) if(s[i] == c) return i;
        return -1;
    }
    bool checkDistances(string s, vector<int>& distance) {
        char curr_letter = 'a';
        int dist = 0;
        int pos = 0;
        for (int i = 0; i < distance.size() && curr_letter <= 'z'; i++) {
            pos = find_pos(s, curr_letter);
            if (pos != -1) {
                dist = 0;
                while (s[pos+1] != curr_letter) {
                    pos++;
                    dist++;
                }
                if (dist != distance[i]) return false;
            }
            curr_letter++;
        }
        return true;
    }
};