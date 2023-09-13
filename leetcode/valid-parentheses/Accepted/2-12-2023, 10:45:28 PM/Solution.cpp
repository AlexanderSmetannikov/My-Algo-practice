// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(const string &s) {
        stack<char, vector<char>> st;
        for (char c : s) {
            if (c == '{') {
                st.push('}');
            } else if (c == '(') {
                st.push(')');
            } else if (c == '[') {
                st.push(']');
            } else {
                if (st.empty()) {
                    return false;
                }
                if (st.top() != c) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};