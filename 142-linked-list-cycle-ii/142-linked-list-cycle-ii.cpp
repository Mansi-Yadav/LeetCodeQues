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
    ListNode *detectCycle(ListNode *head) {
     ListNode* slow= head;
        ListNode* temp= head;
        map<ListNode*,bool> hashmap;
        
        while(temp!=NULL){
            if(hashmap[temp]==true)
                return temp;
            
            hashmap[temp]= true;
            temp= temp->next;
        }
        return NULL;
        
//         while(fast->next!= NULL && fast->next->next !=NULL){
//             slow= slow->next;
//             fast= fast->next->next;
            
//             if(slow== fast)
//                 return slow;
//         }
//         return NULL;
    }
};