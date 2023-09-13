// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        for (string s: word1) s1 += s;
        for (string s: word2) s2 += s;

        if (s1.size() != s2.size()) return false;
        else {
            for (int i = 0; i < s1.size(); i++) {
                if (s1[i] != s2[i]) return false;
            }
        }
        return true;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);