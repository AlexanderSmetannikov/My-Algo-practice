// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:

    bool is_in(vector<char>& al, string& s) {
        for (char c: s) if (!(al[c - 'a'])) return false;
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<char> alphabet(26, 0);
        int ans = 0;
        for (char c: allowed) alphabet[c - 'a']++;
        for (string s: words) if (is_in(alphabet, s)) ans++;
        return ans;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);