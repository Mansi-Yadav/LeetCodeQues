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
    ListNode* getMid(ListNode* head){
        ListNode* slow= head;
        ListNode* fast= head;
        
        while(fast->next!= NULL && fast->next->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
    
ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr= head;
        ListNode* forward;
        
        while(curr!= NULL){
            forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
    }
bool isPalindrome(ListNode* head) {
        if(head->next== NULL|| head== NULL)
            return true;
        
        ListNode*  mid= getMid(head);
        
        //ListNode* midNext= mid->next;
        mid->next= reverse(mid->next);
        mid= mid->next;
        ListNode* head1= head;
        ListNode* head2= mid->next;
        
        while(mid != NULL){
            if(head1->val != mid->val)
                return false;
            
            head1= head1->next;
            mid= mid->next;
            
        }
        
        
       // midNext= mid->next;
       // mid->next= reverse(mid->next);
        
        return true;
    }
};