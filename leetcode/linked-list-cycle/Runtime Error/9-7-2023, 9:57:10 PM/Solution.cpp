// https://leetcode.com/problems/linked-list-cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> nodes;
        while (head -> next) {
            if (nodes.find(head) == nodes.end()) nodes.insert({head, true});
            else return true; 
            head = head -> next;
        }
        return false;
    }
};