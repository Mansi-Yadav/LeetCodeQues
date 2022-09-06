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
        if(head == NULL)
            return false;
        unordered_set<ListNode*> mpp;
        while(head->next != NULL){
            if(mpp.find(head) != mpp.end())
                return true;
            mpp.insert(head);
            head= head->next;
        }
        return false;
    }
};