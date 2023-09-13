// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<char, int> ht;
        for(int i = 0; jewels[i] != '\0'; i++){
            ht[jewels[i]]++;
        }
        
        int count = 0;
        for(int i = 0; stones[i] != '\0'; i++) {
            if(ht.find(stones[i]) != ht.end()) count++;
        }
        return count;
    }
};