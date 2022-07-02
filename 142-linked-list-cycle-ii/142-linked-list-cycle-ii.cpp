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
    ListNode* slove(ListNode* head){
        ListNode * slow= head;
        ListNode * fast= head;
        
        while(fast->next !=NULL&& fast->next->next !=NULL){
            slow= slow->next;
            fast= fast->next->next;
            
            if(slow == fast)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head== NULL)
            return NULL;
       
        ListNode* slow= slove(head);
        //return NULL;
        ListNode * temp= head;
        while(temp!=NULL && slow!=NULL ){
            if(slow == temp  )
                return slow;
            slow= slow->next;
            temp= temp->next;
            
        }
        return NULL;
    }
};