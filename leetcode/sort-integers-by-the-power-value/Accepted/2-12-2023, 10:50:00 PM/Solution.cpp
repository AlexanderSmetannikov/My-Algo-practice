// https://leetcode.com/problems/sort-integers-by-the-power-value

class Solution {
public:
    int procedure(int x) {
        int operations = 0;
        while(x != 1) {
            if(x % 2 == 0) {
                x /= 2;
                operations++;
            }
            else {
            x = x * 3 + 1;
            operations++;
            }        
        }
        return operations;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<int> ans;
        for (int i = lo; i <= hi; i++) ans.push_back(i);
        sort(ans.begin(), ans.end(), [&](int a, int b) {
            int p1 = procedure(a), p2 = procedure(b);
            return p1 == p2 ? a < b : p1 < p2;
        });

        
        
        return ans[k-1];
    } 
};