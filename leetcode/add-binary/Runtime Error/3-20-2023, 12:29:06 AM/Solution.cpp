// https://leetcode.com/problems/add-binary

class Solution {
public:
    bool if_set(int& n, int index) {return (n & (1 << index));}
    string addBinary(string a, string b) {
        string ans = "";
        int n1 = 0, n2 = 0;
        for (int i = a.size() - 1, pow2 = 0; i >= 0; i-- && pow2++) if(a[i] == '1') n1 += pow(2, pow2);
        for (int i = b.size() - 1, pow2 = 0; i >= 0; i-- && pow2++) if(b[i] == '1') n2 += pow(2, pow2);
        
        int index, sum = n1 + n2;
        for (index = 31; (sum & (1 << index)) == 0 && index >=0; index--);
        index++;
        while (index--) {
            if ((sum & (1 << index))) ans += '1';
            else ans += '0';
        }
        return ans;
    }
};