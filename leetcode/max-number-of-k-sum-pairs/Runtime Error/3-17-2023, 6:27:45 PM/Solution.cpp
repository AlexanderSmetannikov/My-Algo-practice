// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:

    typedef struct {
        int val;
        int count;
    } num_pair;

    int is_in(vector<num_pair>& pairs, int k) {
        for (int i = 0; i < pairs.size(); i++) 
            if (pairs[i].val == k) return i;
        return -1;
    }

    int maxOperations(vector<int>& nums, int k) {
        vector<num_pair> pairs;
        int ans = 0;
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k) {
                index = is_in(pairs, k);
                if (index == -1) pairs.push_back({nums[i], 1});
            } else pairs[index].count++;
        }

        // for (int i = 0; i < pairs.size(); i++) printf("val: %d count: %d\n", pairs[i].val, pairs[i].count);
        for (int i = 0; i < pairs.size(); i++) {
            if ( (index = is_in( pairs, (k - pairs[i].val) ) ) != -1) {
                // printf("index val: %d count: %d\n", pairs[index].val, pairs[index].count);
                // printf("val: %d count: %d\n", pairs[i].val, pairs[i].count);
                ans += min(pairs[i].count, pairs[index].count);
            }
        }
        return ans / 2;
    }
};