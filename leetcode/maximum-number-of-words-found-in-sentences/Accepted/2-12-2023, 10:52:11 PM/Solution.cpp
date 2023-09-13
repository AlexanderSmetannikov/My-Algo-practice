// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
public:
    short mostWordsFound(const vector<string>& sentences) {
        short ans = 0;
        for(short i = 0; i < sentences.size(); i++) {
            short cnt = count(sentences[i].begin(), sentences[i].end(), ' ');
            cnt++;
            if (cnt > ans) ans = cnt;
        }
        return ans;
    }
};