// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int num(char c) {
        int res = 0;
        if (c == 'I') res = 1;
        if (c == 'V') res = 5;
        if (c == 'X') res = 10;
        if (c == 'L') res = 50;
        if (c == 'C') res = 100;
        if (c == 'D') res = 500;
        if (c == 'M') res = 1000;
        return res;
    }
    int romanToInt(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++){
            bool s1 = (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'));
            bool s2 = (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'));
            bool s3 = (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'));
            if ((s1 || s2 || s3) && i != (s.size() - 1)) {
                res += (num(s[i+1]) - num(s[i]));
                i++;
            }
            else res += num(s[i]);
        }
        return res;
    }
};