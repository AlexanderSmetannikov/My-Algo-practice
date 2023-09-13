// https://leetcode.com/problems/split-linked-list-in-parts

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int len = 0;
        ListNode* iter = head;
        while (iter) {
            len++;
            iter = iter -> next;
        }
        if (k > len) {
            k -= len;
            while (len--) {
                ListNode *ptr = new ListNode(head -> val);
                ans.push_back(ptr);
                head = head -> next;
            }
            while (k--) ans.push_back(nullptr);
        } else {
            int slice = len / k;
            int more = len % k;
            printf("%d %d", slice, more);
            k -= more;
            while (more--) {
                ListNode *new_slice = new ListNode(head -> val);
                ListNode *ptr = new_slice;
                head = head -> next;
                for (int j = 0; j < slice; j++) {
                    ptr -> next = new ListNode(head -> val);
                    head = head -> next;
                    ptr = ptr -> next;
                }
                ans.push_back(new_slice);
            }
            while (k--) {
                ListNode *new_slice = new ListNode(head -> val);
                ListNode *ptr = new_slice;
                head = head -> next;
                for (int j = 0; j < slice - 1; j++) {
                    ptr -> next = new ListNode(head -> val);
                    head = head -> next;
                    ptr = ptr -> next;
                }
                ans.push_back(new_slice);
            }

        }
        return ans;
    }
};